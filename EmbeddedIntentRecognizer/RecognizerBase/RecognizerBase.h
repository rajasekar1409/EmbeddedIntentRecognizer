// CMakeProject1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <regex>
using namespace std;

class RecognizerBase {
public :
	static const string WEATHERINDENT;
	static const string CITYINDENT;
	static const string CALENDERINDENT;
	static const string FACTINDENT;
	smatch match;
	RecognizerBase();
	virtual bool processGivenInput(std::string userinput) = 0;
};

// TODO: Reference additional headers your program requires here.
