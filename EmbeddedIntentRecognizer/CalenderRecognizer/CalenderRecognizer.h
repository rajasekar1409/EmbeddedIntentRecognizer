// RecognizerBase.h : Includes standard system include files and user defined files

#pragma once

#include <iostream>
#include "RecognizerBase.h"

class CalenderRecognizer : public RecognizerBase {
public:
	CalenderRecognizer(){}
	bool processGivenInput(std::string userinput) override;
};
