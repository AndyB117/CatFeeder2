//Подключение библиотек
#include <lvgl.h> //библиотека пользовательского интерфейса
#include "secrets.h" //различные параметры авторизации
#include <FS.h> //Работа с файловой системой
#include <SPIFFS.h> //файловая система esp32
#include <TFT_eSPI.h> //драйвер дисплея
#include "runingcat_img.c" //нрафика бегущего кота
//#include "food_img.c"//графика миски едой
#include <SPI.h> //драйвер spi
#include <WiFi.h> //библиотека для рабоы с wifi esp32
#include <WiFiManager.h> //Легкая настройка подключения к Wifi сети
#include <GyverNTP.h> //синхронизация с сервером точного времени
#include <GyverTimer.h>//подключение различных таймеров
#include <WiFiClient.h> //работа с wif соединением
#include <PubSubClient.h> //работа по протоколу mqtt
#include <WebServer.h> //веб интерфейс
#include <ArduinoJson.h>//библиотека для работы с файлами конфигурации



//Объявление глобальных переменных и массивов
uint8_t feedTime[4][3] = {
  {7, 0, 1},       // часы, минуты. НЕ НАЧИНАТЬ ЧИСЛО С НУЛЯ
  {12, 0, 1},
  {17, 0, 1},
  {21, 0, 1},
};

int feedAmount = 250; //размер порции

int8_t timezone = 3; //часовой пояс


//переключатель цветовой темы оформления
bool theme = true;  //true темная тема, false светлая

uint16_t lastFeed=0; //время последнего кормления
bool savealarm=false; //флаг осслеживающий, что значение будильника изменилось 

//различные параметры и настройки
#define FEED_SPEED 3000     // задержка между шагами мотора (мкс)
#define STEPS_FRW 19        // шаги вперёд
#define STEPS_BKW 12        // шаги назад

#define FORMAT_SPIFFS_IF_FAILED true //форматирование файловой системы при ошибке инициализации
#define CALIBRATION_FILE "/TouchCalData" 

//Настройка шагового двигателя
const byte drvPins[] = {32, 33, 25, 26};  // драйвер (фазаА1, фазаА2, фазаВ1, фазаВ2)


//Параметры экрана
static const uint16_t screenWidth = 240; //ширина экрана
static const uint16_t screenHeight = 320; //высота экрана


//MQTT настройки
String mqtt_server = "192.168.1.1"; //ip или http адрес
int mqtt_port = 1883; //порт

//Файл конфигурации
const char * filename = "/config.json";  // имя файла конфигурации

//Объявление служебных переменных для LVGL
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * screenHeight / 6];

//объекты интерфейса LVGL
    //Контейнеры
    static lv_obj_t * ui_feedwindow; // окно кормления
    static lv_obj_t * ui_tabview; // панель вкладок
    //Панель состояния
    static lv_obj_t * ui_wifistatus; //статус wifi
    static lv_obj_t * ui_mqttstatus; //статус wifi
    static lv_obj_t * ui_status_ip; //ip адрес
    //Экранные объекты
      //Основной экран
      //Вкладка кормления
      static lv_obj_t * ui_clock; //часы
      static lv_obj_t * ui_label_feedAmount; //размер порции
      static lv_obj_t * ui_remain; //осталось
      static lv_obj_t * img_running_cat; //кот на шкале прогресса
      //Вкладка таймеры
      static lv_obj_t * ui_timer1_hour; //слайдер часов будильника 1
      static lv_obj_t * ui_timer1_minute; //слайдер минут будильника 1
      static lv_obj_t * ui_timer1_check; //активатор будильника 1
      static lv_obj_t * ui_timer2_hour; //слайдер часов будильника 2
      static lv_obj_t * ui_timer2_minute; //слайдер минут будильника 2
      static lv_obj_t * ui_timer2_check; //активатор будильника 2
      static lv_obj_t * ui_timer3_hour; //слайдер часов будильника 3
      static lv_obj_t * ui_timer3_minute; //слайдер минут будильника 3
      static lv_obj_t * ui_timer3_check; //активатор будильника 3
      static lv_obj_t * ui_timer4_hour; //слайдер часов будильника 4
      static lv_obj_t * ui_timer4_minute; //слайдер минут будильника 4
      static lv_obj_t * ui_timer4_check; //активатор будильника 4

      //Окно кормления
      static lv_obj_t * ui_feed_progress_bar; //полоса прогресса кормления
      static lv_obj_t * ui_feed_progress_bar_label; //текст на полосе прогресса кормления

      //Окно настроек
      static lv_obj_t * ui_gmt_slider_label; //текст на слайдере изменения часового пояса  

//Инициализация библиотек
GyverNTP ntp(timezone); //инициализация работы с ntp, в параметрах часовой пояс
TFT_eSPI tft = TFT_eSPI(); // создаем экземпляр объекта TFT_eSPI
WiFiManager wm; //экземпляр объекта wifi manager
WiFiClient esp32Client;
PubSubClient client(esp32Client);
WebServer server(80); //поднимаем веб сервер на 80 порту

//Инициализация таймеров
GTimer reftime(MS);//часы
GTimer reflvgl(MS); //обновление экранов LVGL 
GTimer refremain(MS); //таймер обновления времени до кормления 
GTimer reffeedtime(MS); //таймер времени до запуска кормления
GTimer refchecktime(MS);//проверка срабатывания таймеров кормления
GTimer refsaveconfigdelay(MS);//проверка срабатывания таймеров кормления 
/***** БЛОК СЛУЖЕБНЫХ ФУНКЦИЙ ****/
//Функция для вывода содержимого буфера на экран
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
  {
 uint32_t w = ( area->x2 - area->x1 + 1 );
 uint32_t h = ( area->y2 - area->y1 + 1 );

 tft.startWrite();
 tft.setAddrWindow( area->x1, area->y1, w, h );
 tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
 tft.endWrite();

 lv_disp_flush_ready( disp );
  }

// Вычисление координат касания
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
    uint16_t touchX, touchY;

    bool touched = tft.getTouch( &touchX, &touchY, 600 );

    if( !touched )
    {
        data->state = LV_INDEV_STATE_REL;
    }
    else
    {
        data->state = LV_INDEV_STATE_PR;
        data->point.x = touchX;
        data->point.y = touchY;

        Serial.print( "Data x " );
        Serial.println( touchX );

        Serial.print( "Data y " );
        Serial.println( touchY );
    }
}

void touch_calibrate(bool rewrite)
{
  uint16_t calData[5];
  uint8_t calDataOK = 0;

  if (rewrite) {SPIFFS.remove(CALIBRATION_FILE); rewrite=false;}
  // Проверка наличия файла калибровки и его целостности
  if (SPIFFS.exists(CALIBRATION_FILE)) {
      File f = SPIFFS.open(CALIBRATION_FILE, "r");
      if (f) {
        if (f.readBytes((char *)calData, 14) == 14)
          calDataOK = 1;
        f.close();
      }
    
  }

  if (calDataOK && !rewrite) {
    // настройки калибровки верны
    tft.setTouch(calData);
  } else {
    // data not valid so recalibrate
    tft.fillScreen(TFT_BLACK);
    tft.setCursor(20, 0);
    tft.setTextSize(1);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);

    tft.println("Touch a points to calibrate...");
    tft.println();


    tft.calibrateTouch(calData, TFT_MAGENTA, TFT_BLACK, 15);
    tft.setTextColor(TFT_GREEN, TFT_BLACK);
    tft.println("Screen calibration complete!");

    // store data
    File f = SPIFFS.open(CALIBRATION_FILE, "w");
    if (f) {
      f.write((const unsigned char *)calData, 14);
      f.close();
      ESP.restart();
    }
  }
}

/***** КОНЕЦ БЛОКА СЛУЖЕБНЫХ ФУНКЦИЙ ****/

void setup() 
{
  Serial.begin( 115200 ); //открытие серийного порта

  //Настройки экрана  
  tft.init(); // инициализируем дисплей
  tft.setRotation (2); 

  //Инициализация файловой системы
 if (fs_init())
  {
        Serial.println("Чтение файла конфигурации...");
        loadConfiguration("/config.json");
        readFile(SPIFFS, "/config.json");
        touch_calibrate(false);
  }

  lv_init();//инициализация LVGL
  //Далее идут функции настройки LVGL 
  lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 6 ); //создаем буфер для вывода информации на экран
 
  //далее идет настройка параметров экрана
  static lv_disp_drv_t disp_drv; //объявляем переменную для хранения драйвера дисплея
  lv_disp_drv_init( &disp_drv ); //базовая инициализация драйвера
  disp_drv.hor_res = screenWidth; //ширина экрана
  disp_drv.ver_res = screenHeight; //высота экрана
  disp_drv.flush_cb = my_disp_flush; //функция которая выводит содержимое буфера в заданное место экрана. Указываем имя функции которую мы написали выше
  disp_drv.draw_buf = &draw_buf; //объявляем библиотеке, что содержимое буфера экрана находится в переменной draw_buf
  lv_disp_drv_register( &disp_drv ); //регистрируем драйвер дисплея и сохраняем его настройки
  // Инициализируем драйвер тачскрина
  static lv_indev_drv_t indev_drv; //объявляем переменные для хранения драйвера тачскрина
  lv_indev_drv_init( &indev_drv ); // базовая инициализация драйвера
  indev_drv.type = LV_INDEV_TYPE_POINTER; //указываем тип драйвера. В данном случае это тачскрин
  indev_drv.read_cb = my_touchpad_read; //указываем имя функции обработчика нажатий на тачскрин, которую мы создали
  lv_indev_drv_register( &indev_drv ); //регистрация драйвера тачскрина и сохранение его настроек
  
  
//Отрисовка интерфейса
  draw_interface();


 
 
 //Инициализация wifi
 
  WiFi.mode(WIFI_AP_STA);
  WiFi.onEvent(WiFiGotIP, WiFiEvent_t::ARDUINO_EVENT_WIFI_STA_GOT_IP);
  if(!wm.autoConnect("CatFeeder2","12345678")) {
        Serial.println("Не удалось подкключиться к сети");
        lv_obj_add_flag(ui_wifistatus, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_status_ip, LV_OBJ_FLAG_HIDDEN); 
    } 
    else {  
        Serial.println("Подключение успешно");
        lv_obj_clear_flag(ui_wifistatus, LV_OBJ_FLAG_HIDDEN); //Отображение иконки wifi
        lv_obj_clear_flag(ui_status_ip, LV_OBJ_FLAG_HIDDEN); //Показать IP адрес
    } 
  
  //настраиваем пины для шагового двигателя
  for (byte i = 0; i < 4; i++) pinMode(drvPins[i], OUTPUT);   // пины выходы
    
  
  //запуск сервисов
  ntp.begin(); //сервис синхронизации времени
  server_init();//запуск веб сервера
  

  //Установка значений таймеров
  reftime.setInterval(1000);//обновление времени на экране 1000 мс или 1 секунда
  refremain.setInterval(10000);//обновление времени на экране 30000 мс или 30 секунд
  reflvgl.setInterval(30);//обновление экрана LVGL 30 мс
  refchecktime.setInterval(500);//раз в полсекунды
  refsaveconfigdelay.stop();
  }

/**** ВТОРОЙ БЛОК ФУНКЦИЙ ****/
//Подключение к Wifi успешно. Получен ip адрес
void WiFiGotIP(WiFiEvent_t event, WiFiEventInfo_t info){
  Serial.println("WiFi connected");
  IPAddress ip = WiFi.localIP();
  String ipString =String(ip[0]);
  for (byte octet = 1; octet < 4; ++octet) {
    ipString += '.' + String(ip[octet]);
  }
  lv_label_set_text(ui_status_ip,ipString.c_str());
  Serial.println("IP address: ");
  Serial.println(ip);
  MQTT_init();//Подключение к MQTT брокеру
}
/**** КОНЕЦ БЛОКА ФУНКЦИЙ ****/


void loop() 
{
  //Проверка статуса wifi
  if (WiFi.status() == WL_CONNECTED)
    { 
      lv_obj_clear_flag(ui_wifistatus, LV_OBJ_FLAG_HIDDEN);
      lv_obj_clear_flag(ui_status_ip, LV_OBJ_FLAG_HIDDEN);
      ntp.tick(); //синхронизируем время
      if (ntp.synced() && lastFeed==0) lastFeed=ntp.hour()*60 + ntp.minute(); //заполняем время последнего кормления при первом запуске. По умолчанию ставим время первой синхронизации с с ервером времени
    }
  else
    {
      lv_obj_add_flag(ui_wifistatus, LV_OBJ_FLAG_HIDDEN);
      lv_obj_add_flag(ui_status_ip, LV_OBJ_FLAG_HIDDEN);
    }
  
  //Проверяем значения таймеров
  if (reflvgl.isReady()) { lv_timer_handler();} //Обновляем экран
  if (reftime.isReady()) {if (lv_tabview_get_tab_act(ui_tabview)==0) {lv_label_set_text(ui_clock, ntp.timeString().c_str());}} //обновляем занчение часов на экране
  if (refremain.isReady()){feedRemain();} //Отображение времени оставшегося до кормления
  if (reffeedtime.isReady()) {reffeedtime.stop();feed();}//ожидание загрузки экрана кормления и запуск функции
  if (refsaveconfigdelay.isReady()) {refsaveconfigdelay.stop();saveConfiguration("/config.json");} //Обновляем экран
  if (refchecktime.isReady()) //проверка таймера кормления
      {
        static byte prevMin = 0;
          if (ntp.status()==0)
            {
              if (prevMin != ntp.minute()) 
                {//исключаем двойной запуск кормления при срабатывании таймера
                  prevMin = ntp.minute();
                  for (byte i = 0; i < sizeof(feedTime) / 2; i++)    // проверяем массив с расписанием
                  if (feedTime[i][0] == ntp.hour() && feedTime[i][1] == ntp.minute() &&feedTime[i][2] == 1) prefid();
                }
            }
  }
  client.loop(); //чтение состояния топиков MQQT
  server.handleClient(); //обработка запросов web интерфейса
  
}


