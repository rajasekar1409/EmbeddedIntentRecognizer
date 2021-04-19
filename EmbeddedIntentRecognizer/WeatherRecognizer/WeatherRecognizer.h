// WeatherRecognizer.h : Includes standard system include files and user defined files

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "RecognizerBase.h"

class WeatherRecognizer : public RecognizerBase {
private:
	vector<string> keywords_climate;
	vector<string> keywords_city;
	string Weather = "weather";

public:
	WeatherRecognizer();
	bool processGivenInput(std::string userinput) override;
};
