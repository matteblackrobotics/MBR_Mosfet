#include "MBR_Mosfet.h"

// Need to update
// Left: +5
// Middle: signal
// Right: GND 

// Constructor
MBR_Mosfet::MBR_Mosfet(uint8_t mosfetPin){
    _pin = mosfetPin;
    pinMode(_pin, OUTPUT);
    mosfetOff();
}

bool mosfetOn(){
  _mosfetState = 1;
  digitalWrite(_mosfetPin, HIGH);
  return _mosfetState;
}

bool mosfetOff(){
  _mosfetState = 0;
  digitalWrite(_mosfetPin, LOW);
  return _mosfetState;
}

bool getMosfetState(){
  return _mosfetState;
}