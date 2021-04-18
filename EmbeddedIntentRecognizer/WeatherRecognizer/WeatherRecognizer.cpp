// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "WeatherRecognizer.h"

using namespace std;

WeatherRecognizer::WeatherRecognizer() {
	keywords_climate = { "rain","sunny","cloudy","snow" };
	keywords_city = { "Paris", "NewYork", "Tokoyo", "Berlin" };
}
bool WeatherRecognizer::processGivenInput(std::string userinput) 
{
	bool foundlabel = false;
	string indent = "";
	regex str_expr("(" + Weather + ")" + "(.*)");

	if (regex_search(userinput, match, str_expr)) {
		indent = RecognizerBase::WEATHERINDENT;

		for (auto& city : keywords_city) {
			regex str_expr2("(" + city + ")" + "(.*)");

			if (regex_search(userinput, match, str_expr2)) {
				indent = RecognizerBase::CITYINDENT;
				break;
			}
		}
		foundlabel = true;
	}
	else
	{
		for (auto& climate : keywords_climate) {
			regex str_expr2("(" + climate + ")" + "(.*)");

			if (regex_search(userinput, match, str_expr2)) {
				indent = RecognizerBase::WEATHERINDENT;
				foundlabel = true;
				break;
			}
		}
	}
	if (foundlabel)
	{
		cout << indent << endl;
	}
	return foundlabel;
}

