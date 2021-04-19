// RecognizerBase.h : Includes standard system include files and user defined files

#pragma once

#include <iostream>
#include <regex>
using namespace std;

class RecognizerBase {
private :
	static const string WEATHERINDENT;
	static const string CITYINDENT;
	static const string CALENDERINDENT;
	static const string FACTINDENT;

public:
	smatch match;

	RecognizerBase(){}
	virtual bool processGivenInput(string userinput) = 0;
	string getWeatherIndent();
	string getCityIndent();
	string getCalenderIndent();
	string getFactIndent();
	smatch getSmatch();
	virtual ~RecognizerBase() = default;
};

// TODO: Reference additional headers your program requires here.
