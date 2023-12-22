#ifndef MBR_Mosfet_h
#define MBR_Mosfet_h

#include <Arduino.h>

class MBR_Mosfet{
  public:
    MBR_Mosfet(uint8_t mosfetPin); // pin and Vin
    bool mosfetOn();
    bool mosfetOff();
    bool getMosfetState();
    bool mosfetState;

  private:
    uint8_t _pin;
};


#endif