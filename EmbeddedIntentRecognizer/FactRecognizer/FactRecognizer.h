// FactRecognizer.h : Includes standard system include files and user defined files

#pragma once

#include <iostream>
#include "RecognizerBase.h"

class FactRecognizer : public RecognizerBase {
private:
	vector<string> humanFact = { "interest", "Smile", "Angry", "Happy" };
public:
	FactRecognizer(){}
	bool processGivenInput(string userinput) override;
};
