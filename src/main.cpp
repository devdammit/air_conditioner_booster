#include <Arduino.h>
#include <Thermostat.h>
#include <AirConditioner.h>

Thermostat thermostat;

AirConditioner airConditioner;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  uint8_t temperature = thermostat.get();

  if (temperature > 25 && airConditioner.enabled == false) {
    airConditioner.enable(temperature);
  } else if (temperature < 25 && airConditioner.enabled == true) {
    airConditioner.disable();
  }

  Serial.println(temperature);
  delay(1000);
  // put your main code here, to run repeatedly:
}