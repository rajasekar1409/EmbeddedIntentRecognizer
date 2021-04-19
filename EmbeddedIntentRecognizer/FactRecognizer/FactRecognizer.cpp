// FactRecognizer.cpp : Defines the entry point for the application.

#include "FactRecognizer.h"
using namespace std;

bool FactRecognizer::processGivenInput(string userinput) { 
	for (auto& fact : humanFact) {
		regex str_expr2("(" + fact + ")" + "(.*)");

		if (regex_search(userinput, match, str_expr2)) {
			cout << RecognizerBase::getFactIndent() << endl;
			return true;
		}
	}
	return false; 
}

