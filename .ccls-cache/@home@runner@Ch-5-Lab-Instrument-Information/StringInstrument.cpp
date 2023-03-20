//
// File: StringInstrument.cpp
// Description: Pet Information(derived classes)
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "StringInstrument.h"

// DONE: Define mutator functions - 
//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
void StringInstrument::SetNumOfStrings(int stringsSet) {
  numStrings = stringsSet;
}
void StringInstrument::SetNumOfFrets(int fretsSet) {
  numFrets = fretsSet;
}
void StringInstrument::SetIsBowed(bool bowedSet) {
  isBowed = bowedSet;
}

// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()
int StringInstrument::GetNumOfStrings() const{
  return numStrings;
}
int StringInstrument::GetNumOfFrets() const{
  return numFrets;
}
bool StringInstrument::GetIsBowed() const{
  return isBowed;
}
