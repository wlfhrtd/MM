// MouseMoverApplication.h
#ifndef MOUSEMOVERAPPLICATION_H
#define MOUSEMOVERAPPLICATION_H

#include <iostream>
#include <Windows.h>
#include "MouseHelper.h"
#include "ClockManager.h"
#include "InteractionHelper.h"
#include "HotkeysManager.h"

#pragma once

class MouseMoverApplication
{
private:
	MouseHelper MOUSE;
	ClockManager CLOCK;
	InteractionHelper INTERACTION;
	HotkeysManager HOTKEYS;

	void Process(int& delta);
	void OnStart();
	void OnTick();
	void OnStop();

public:
	void Run(int& delta);

	MouseMoverApplication();
	~MouseMoverApplication();
};

#endif