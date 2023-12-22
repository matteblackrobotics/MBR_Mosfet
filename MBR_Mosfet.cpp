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

bool MBR_Mosfet::mosfetOn(){
  mosfetState = 1;
  digitalWrite(_pin, HIGH);
  return mosfetState;
}

bool MBR_Mosfet::mosfetOff(){
  mosfetState = 0;
  digitalWrite(_pin, LOW);
  return mosfetState;
}

bool MBR_Mosfet::getMosfetState(){
  return mosfetState;
}