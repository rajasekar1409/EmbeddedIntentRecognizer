// MainApp.cpp : Main() gets the input from user and start process it.

#include "MainApp.h"
#include "RecognizerFactory.h"
using namespace std;

int main()
{
	string input;
	//cout << "Hello :) How can I help you :)"<<endl;
	//cout << "If you don't need a help at the moment, please type 'quit' to terminate the application" << endl;
	//getline(cin, input);
	//unsigned int count = 1;
	bool done = false;

	while (!done) {
		cout << "Hello :) How can I help you :)" << endl;
		cout << "If you don't need a help at the moment, press 'q' and enter to terminate the application" << endl;
		getline(cin, input);
		unsigned int count = 1;

		if (input == "q") {
			done = true;
			break;
		}

		RecognizerFactory* instanceFactory = RecognizerFactory::GetinstanceRecognizerFactory();
		while (count < 4)
		{
			RecognizerBase* baseInstancePtr = instanceFactory->createObjectforReconginzer(count);
			if (baseInstancePtr->processGivenInput(input)) {
				delete baseInstancePtr;
				break;
			}
			delete baseInstancePtr;
			count++;
		}
	}
	return 0;
}
