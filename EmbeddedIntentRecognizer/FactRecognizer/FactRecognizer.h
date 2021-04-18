// CMakeProject1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

#include <RecognizerBase.h>

class FactRecognizer : public RecognizerBase {
private:
	vector<string> humanFact = { "interest", "Smile", "Angry", "Happy" };
public:
	FactRecognizer();
	bool processGivenInput(string userinput);
};
