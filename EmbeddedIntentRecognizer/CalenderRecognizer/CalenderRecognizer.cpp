// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CalenderRecognizer.h"

using namespace std;

CalenderRecognizer::CalenderRecognizer() {}
bool CalenderRecognizer::processGivenInput(string userinput) {

	regex str_expr3("([0-9]{2}):([0-9]{2})");
	if (regex_search(userinput, match, str_expr3)) {
		cout << RecognizerBase::CALENDERINDENT<< endl;
		return true;
	}
	return false;
}

