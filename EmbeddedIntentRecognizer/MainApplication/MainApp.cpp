// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "MainApp.h"
#include "RecognizerFactory.h"

using namespace std;

int main()
{
	string input;
	cout << "Hello :) How can I help you :)"<<endl;
	getline(cin, input);
	int count = 1;
	RecognizerFactory* instance = RecognizerFactory::GetinstanceRecognizerFactory();
	while (count < 4)
	{
		RecognizerBase* baseinstance_p = instance->createObjectforReconginzer(count);
		if (baseinstance_p->processGivenInput(input)){
			delete baseinstance_p;
			break;
		}
		delete baseinstance_p;
		count++;
	}

	return 0;
}
