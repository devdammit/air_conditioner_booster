#include <Arduino.h>
#include <Thermostat.h>


Thermosat thermostat;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  uint8_t temperature = thermostat.get();

  Serial.println(temperature);
  delay(1000);
  // put your main code here, to run repeatedly:
}