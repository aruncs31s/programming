# ESP8266 
- 
-

## Wifi
source : https://github.com/esp8266/Arduino/blob/master/doc/esp8266wifi/readme.rst

- Connect to a wifi


```
#include <ESP8266Wifi.h>

void setup()
{
  const char* wifi_ssid = "test";
  const chat* wifi_key  = "password";

  Serial.begin(115200);
  Serial.println();

  WiFi.begin(wifi_ssid,wifi_key );

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {}

```
