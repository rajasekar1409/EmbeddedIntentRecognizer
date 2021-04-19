// CMakeProject1.h : Includes standard system include files and user defined files

#pragma once

#include <iostream>
#include "RecognizerBase.h"

class RecognizerFactory {

private:
	RecognizerFactory(){}
	static RecognizerFactory* recognizerFactoryInstancePtr;

public:
	RecognizerBase* createObjectforReconginzer(int category);
	static RecognizerFactory* GetinstanceRecognizerFactory();
};
