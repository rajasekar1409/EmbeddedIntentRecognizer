// CalenderRecognizer.cpp : Determines Calender Intent.

#include "CalenderRecognizer.h"
using namespace std;

bool CalenderRecognizer::processGivenInput(string userinput) {
	regex str_expr1("([0-9]{2}):([0-9]{2})");
	regex str_expr2("([0-9]+).([0-9]+).([0-9]*)?");

	if (regex_search(userinput, match, str_expr1)) {
		cout << RecognizerBase::getCalenderIndent()<< endl;
		return true;
	}
	else if (regex_search(userinput, match, str_expr2)) {
		cout << RecognizerBase::getCalenderIndent() << endl;
		return true;
	}
	/*else
	{
		regex str_expr3("(.*)(day)(.*)");
		if (regex_match(userinput, str_expr3)) {
			cout << RecognizerBase::getCalenderIndent() << endl;
			return true;
		}
	}*/
	return false;
}

