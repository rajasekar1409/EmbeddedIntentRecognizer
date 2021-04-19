// RecognizerFactory.cpp : Factory class creates the instances at runtime for the defined classes.

#include "RecognizerFactory.h"
#include "WeatherRecognizer.h"
#include "CalenderRecognizer.h"
#include "FactRecognizer.h"
using namespace std;

RecognizerFactory* RecognizerFactory::recognizerFactoryInstancePtr = nullptr;

RecognizerFactory* RecognizerFactory::GetinstanceRecognizerFactory()
{
	if (recognizerFactoryInstancePtr == nullptr)
	{
		recognizerFactoryInstancePtr = new RecognizerFactory();
	}
	return recognizerFactoryInstancePtr;
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

