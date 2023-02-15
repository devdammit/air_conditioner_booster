#include <Arduino.h>

class AirConditioner {
  AirConditioner();
    
  public:
    bool enabled;

    void disable();
    void enable(int8_t temperature);
};

