# CatFeeder 2
Полная перереработка проекта [CatFeeder](https://github.com/altJSV/CatFeeder) под ESP32.

## Особенности проекта
* Цветной TFT экран с сенсорным управлением
* Часы с синхронизацией времени по NTP протоколу
* Настройки размера порции и времени кормления с 4 независимыми будильниками
* Точная настройка размера порции с помощью цифровых весов
* Проверка наличия корма в бункере и отслеживание забивания подающего лотка
* Уведомления в Telegram
* Управление по MQTT протколу для интеграции в систему умного дома
* Веб интерфейс
* Сохранение и запись настроек в файлы конфигурации

## Сборка проекта
Для сборки проекта вам понадобятся следующие компоненты:
* Любая отладочная плата на базе ESP32. Я использовал ESP32 WROOM 38 PIN
* Драйвер мотора MX1508
* Шаговый двигатель NEMA17
* Сенсорный дисплей ILI9341 с разрешением 320x240 и драйвером тача XPT2046
* Цифровой датчик веса 5кг + драйвер HX711
* Набор проводов для соединений
* Макетная плата 50х70 мм
* Несколько разъемов hx2.54 или похожих для подключения проводов
* Источник питания минимум 5В 2А. Подойдет любая мощная USB зарядка от телефона

Далее, в соответствии со схемой, подключаем все компоненты. 
Если кто-то решит собирать на макетной плате как я, то ниже несколько более подробное описание процесса сборки с фото.
Решил не распаивать все на одной плате и сделать проект модульным, чтобы в случае каких либо проблем, просто заменить неисправный модуль на новый.
Для начала, на макетке распаял все разъемы для подключения ESP32 и домполнительных модулей. Сразу же припаял USB разъем для подключения зарядного устройства.
![Распайка разъемов](/docs/solder1.jpg)
Со подключенным ESP32 управляющая плата выглядит следующим образом.
![Подключение ESP32](/docs/solder2.jpg)
С обратной стороны платы, соединил проводами из витой пары контакты разъема ESP32 с разъемами на плате. Ниже одно из ранних фото процесса. Еще не все контакты распаяны.
![Вид сзади](/docs/solder3.jpg)
Для удобства, при пайке, можете сверяться со схемой ниже
![Схема пайки](/docs/board_pinout_ref.png)
Шлейфы, для подключения дополнительных модулей, делал из той же витой пары. На фото ниже шлейф дисплея.
![Шлейф дисплея](/docs/solder4.jpg)
После пайки платы, обязательно прозвоните все контакты мультиметром и заизолируйте все места пайки. Паяльной маской, термоклеем или тем, что у вас есть под рукой.
Два разъема питания из четырех, пока никак не задействованы и были оставлены для возможных будущих модификаций.


## Прошивка
Сборка и установка прошивки осуществляется в среде разработки Arduino IDE

### Необходимые библиотеки

Для сборки проекта вам необходимо установить дополнительные библиотеки для Arduino IDE:
* LVGL - 8.3.10
* TFT_eSPI - 2.5.0 и выше
* GyverNTP - 1.3.1
* GyverTimer - 3.2
* PubSubClient от Nick O'Leary - 2.8
* ArduinoJSON - 6.21.3
* FastBot - 2.25
* GyverHX711 - 1.2


## Особенности использования
### Управление через Telegram бота
Для управления кормушкой через Telegram бота прежде всего необходимо его создать воспользовашись [инструкцией](https://projectalt.ru/publ/arduino_esp8266_i_esp32/programmirovanie/upravlenie_esp8266_cherez_telegram_bota/11-1-0-38) и получить API ключ и ваш ChatID.
Далее, если вы собираете прошивку из исходников, измените значения переменныйх *String bot_token = "1234567890" и String chatID = "chat"* в файле secrets.h на полученные вами учетные данные.
Если вы прошили устройство с помощью предварительно скомпилированных бинарных файлов, то данные параметры можно изменить на вкладке "Настройки" в разделе Telegram.
Если все настроено корректно, то кормушка  при старте отправляет боту сообщение: "Cat Feeder 2 готов к работе!".
Управление устройством осуществляется отправкой в чат с ботом управляющих команд вида */команда параметр 1 параметр2 ...*
#### Полный список управляющих команд
**feed** - выдача одной порции корма с предустановленными параметрами
...

### Управление по протоколу MQTT
Для управления кормушкой по протоколe MQTT необходимо выполнить ряд настроек. В файле CatFeeder.ino изменить значения следующих переменных:
*String mqtt_server = "192.168.1.1"; //ip или http адрес
int mqtt_port = 1883; //порт*
Подставьте в них адрес и порт используемого вами MQTT брокера.
В secrets.h хранятся учетные данные для подключения.
String mqtt_login="login"; //логин
String mqtt_pass="pass"; //пароль
Измените значения на ваши.
Также настройка MQTT подключения возможна и через веб интерфейс.
Если все настройки верны, то при успешном подключении к брокеру в статусной панели появится соответствующий значок.

#### Полный список управляющих команд
Для управления используется топик CatFeeder/feed
**feed** - выдача одной порции корма с предустановленными параметрами
