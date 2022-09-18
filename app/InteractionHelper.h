// InteractionHelper.h
#include <iostream>
#include "ConsoleHelper.h"

#ifndef INTERACTIONHELPER_H
#define INTERACTIONHELPER_H

#pragma once

class InteractionHelper
{
private:

public:
	ConsoleHelper CONSOLE;

	void ShowHelp();

	InteractionHelper();
	~InteractionHelper();
};

#endif