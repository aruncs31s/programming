#ifndef __PINS_H_
#define __PINS_H_

#if defined(ESP32)
const int PIN_WIND_DIRECTION = 32;
const int PIN_WIND_SPEED = 34;
const int PIN_RAINFALL = 35;
const int ADC_PIN = 36;
#elif defined(ESP8266)
const int ADC_PIN = A0;
const int PIN_RAINFALL = D6;
const int PIN_WIND_DIRECTION = D7;
const int PIN_WIND_SPEED = D8;

#endif
#endif // __PINS_H_
