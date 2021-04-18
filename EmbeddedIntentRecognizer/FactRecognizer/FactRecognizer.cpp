// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "FactRecognizer.h"

using namespace std;

FactRecognizer::FactRecognizer() {}
bool FactRecognizer::processGivenInput(string userinput) { 
	for (auto& fact : humanFact) {
		regex str_expr2("(" + fact + ")" + "(.*)");

		if (regex_search(userinput, match, str_expr2)) {
			cout << RecognizerBase::FACTINDENT << endl;
			return true;
		}
	}
	
	return false; 
}

