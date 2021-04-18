// CMakeProject1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

#include <RecognizerBase.h>

class RecognizerFactory {

private:
	RecognizerFactory();

	static RecognizerFactory* RecognizerFactoryinstance_p;

public:
	RecognizerBase* createObjectforReconginzer(int category);

	static RecognizerFactory* GetinstanceRecognizerFactory();
};
