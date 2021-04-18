// CMakeProject1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

#include <RecognizerBase.h>

class CalenderRecognizer : public RecognizerBase {
public:
	CalenderRecognizer();
	bool processGivenInput(std::string userinput) override;
};
