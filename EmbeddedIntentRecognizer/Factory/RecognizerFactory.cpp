// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "RecognizerFactory.h"
#include "WeatherRecognizer.h"
#include "CalenderRecognizer.h"
#include "FactRecognizer.h"

using namespace std;

RecognizerFactory::RecognizerFactory() {}

RecognizerFactory* RecognizerFactory::RecognizerFactoryinstance_p = nullptr;

RecognizerFactory* RecognizerFactory::GetinstanceRecognizerFactory()
{
	if (RecognizerFactoryinstance_p == nullptr)
	{
		RecognizerFactoryinstance_p = new RecognizerFactory();
	}
	return RecognizerFactoryinstance_p;
}


RecognizerBase* RecognizerFactory::createObjectforReconginzer(int category)
{
	RecognizerBase* RecognizerBase_p = nullptr;
	switch (category)
	{
		case 1 :
		{
			RecognizerBase_p = new WeatherRecognizer();
			break;
		}
		case 2 :
		{
			RecognizerBase_p = new CalenderRecognizer();
			break;
		}
		case 3: 
		{
			RecognizerBase_p = new FactRecognizer();
			break;
		}
		default:
		{
			break;
		}
	}
	return RecognizerBase_p;
}

