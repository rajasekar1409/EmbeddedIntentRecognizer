// WeatherRecognizer.cpp : Determines weather Intent.

#include "WeatherRecognizer.h"
using namespace std;

WeatherRecognizer::WeatherRecognizer() {
	keywords_climate = { "rain","sunny","cloudy","snow" };
	keywords_city = { "Paris", "New York", "Tokoyo", "Berlin" };
}

bool WeatherRecognizer::processGivenInput(std::string userinput) 
{
	bool foundLabel = false;
	string indent;
	regex str_expr("(" + Weather + ")" + "(.*)");

	if (regex_search(userinput, match, str_expr)) {
		indent = RecognizerBase::getWeatherIndent();

		for (auto& city : keywords_city) {
			regex str_expr2("(" + city + ")" + "(.*)");

			if (regex_search(userinput, match, str_expr2)) {
				indent = RecognizerBase::getCityIndent();
				break;
			}
		}
		foundLabel = true;
	}
	else
	{
		for (auto& climate : keywords_climate) {
			regex str_expr2("(" + climate + ")" + "(.*)");

			if (regex_search(userinput, match, str_expr2)) {
				indent = RecognizerBase::getWeatherIndent();
				foundLabel = true;
				break;
			}
		}
	}

	if (foundLabel)
	{
		cout << indent << endl;
	}
	return foundLabel;
}

