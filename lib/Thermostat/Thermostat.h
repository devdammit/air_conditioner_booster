#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define THERMOSTAT_PIN 0

class Thermostat {

Thermostat();

public:
  uint8_t get();


private:
  DallasTemperature sensors;
};
