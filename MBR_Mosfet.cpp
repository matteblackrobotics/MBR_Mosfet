#include "MBR_Mosfet.h"

// Need to update
// Left: +5
// Middle: signal
// Right: GND 

// Constructor
MBR_Mosfet::MBR_Mosfet(uint8_t pin){
    _pin = pin;
    pinMode(_pin, OUTPUT);
    Off();
}

bool MBR_Mosfet::On(){
  state = 1;
  digitalWrite(_pin, HIGH);
  return state;
}

bool MBR_Mosfet::Off(){
  state = 0;
  digitalWrite(_pin, LOW);
  return state;
}

bool MBR_Mosfet::State(){
  return state;
}