#include <Arduino.h>

class AirConditioner {
  bool enabled;
  
  AirConditioner() {
    enabled = false;
  }

  public:
    void enable(int8_t temperature) {
      Serial.print("Air conditioner enabled at ");
      Serial.print(temperature);
      Serial.println(" degrees");
    }

    void disable() {
      Serial.println("Air conditioner disabled");
    }
};