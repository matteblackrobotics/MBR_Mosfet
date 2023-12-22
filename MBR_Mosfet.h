#ifndef MBR_Pot_h
#define MBR_Pot_h

#include <Arduino.h>

class MBR_Pot{
  public:
    MBR_Pot(uint8_t potPin, float Vin); // pin and Vin
    int readPotRaw(); // [0:1023] 10-bit
    int potRaw;

    float readPotVolt();  // voltage reading [0.0:Vin]
    float potVolt;

    float readPotNorm();  // normalized raading [0.0:100.0]
    float potNorm;

    float minLimit; // minimum limit value
    float maxLimit; // maximum limit value

  private:
    uint8_t _pin;
    float _Vin;
};


#endif