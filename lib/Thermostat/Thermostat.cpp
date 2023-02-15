#include <Arduino.h>
#include <Thermostat.h>



Thermostat::Thermostat() {
  Serial.println("Thermostat initialized");

  OneWire oneWire(THERMOSTAT_PIN);
  DallasTemperature sensors(&oneWire);
  
  sensors.begin();
}

uint8_t Thermostat::get() {
  sensors.requestTemperatures();

  return sensors.getTempCByIndex(0);
}

