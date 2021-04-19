// RecognizerBase.cpp : Defines the entry point for the application.

#include "RecognizerBase.h"
using namespace std;

const string RecognizerBase::WEATHERINDENT = "Get Weather";
const string RecognizerBase::CITYINDENT = "Get Weather City";
const string RecognizerBase::CALENDERINDENT = "Get Calender";
const string RecognizerBase::FACTINDENT = "Get Fact";

string RecognizerBase::getCalenderIndent() {
	return CALENDERINDENT;
}

string RecognizerBase::getCityIndent() {
	return CITYINDENT;
}

string RecognizerBase::getFactIndent() {
	return FACTINDENT;
}

string RecognizerBase::getWeatherIndent() {
	return WEATHERINDENT;
}

smatch RecognizerBase::getSmatch() {
	return match;
}
