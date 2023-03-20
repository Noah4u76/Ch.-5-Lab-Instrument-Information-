//
// File: StringInstrument.h
// Description: Pet Information(derived classes)
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument {
	// DONE: Declare private data members: numStrings, numFrets, isBowed
private:
int numStrings = 0;
int numFrets = 0;
bool isBowed = false;

// DONE: Declare mutator functions - 
//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
public:
void SetNumOfStrings(int numStrings);
void SetNumOfFrets(int numFrets);
void SetIsBowed(bool setBowed);

	// DONE: Declare accessor functions -
	//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()
int GetNumOfStrings() const;
int GetNumOfFrets() const;
bool GetIsBowed() const;
};

#endif
