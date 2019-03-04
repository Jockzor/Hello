// Physical device information for board and sensor
#define DEVICE_ID             WiFi.macAddress()     // already configured
#define DEVICE_STUDENT        "Joacim"
#define DEVICE_TYPE           "Feather1"
#define DEVICE_LOCATION_LAT   "27.986065"
#define DEVICE_LOCATION_LON   "86.922623"      
//#define DEVICE_SEND_INTERVAL  60000     //default 3600000 ms = 1 hour
#define DEVICE_SEND_INTERVAL  1200000   // 1200000 = 20 minutes

#define WIFI_SSID    "IoT"
#define WIFI_PASS    "IoT2018!"


//DHT Temperature sensor configuration
#define DHT_PIN               14
#define DHT_TYPE              DHT11


// Pin layout configuration
#define LED_PIN               0


// Address configuration, don't remove!
#define MESSAGE_MAX_LEN       256
#define EEPROM_SIZE           512
#define SSID_LEN              32
#define PASS_LEN              32
#define CONNECTIONSTRING_LEN  256
