#ifndef MBR_Mosfet_h
#define MBR_Mosfet_h

#include <Arduino.h>

class MBR_Mosfet{
  public:
    MBR_Mosfet(uint8_t pin); // pin and Vin
    bool On();
    bool Off();
    bool State();
    bool state;

  private:
    uint8_t _pin;
};

#endif