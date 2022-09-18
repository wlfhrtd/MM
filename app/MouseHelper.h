// MouseHelper.h
#ifndef MOUSEHELPER_H
#define MOUSEHELPER_H

#include <Windows.h>
#include "SystemHelper.h"

#pragma once

class MouseHelper
{
private:
	INPUT buffer[1];
	SystemHelper SYSTEM;
	// hardcoded centering mouse; fine for now
	int X = SYSTEM.GetScreenWidth() / 2;
	int Y = SYSTEM.GetScreenHeight() / 2;
public:
	void MouseSetup();
	void MouseMoveAbsolute(const int& delta);

	MouseHelper();
	~MouseHelper();
};

#endif