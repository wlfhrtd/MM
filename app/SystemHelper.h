// SystemHelper.h
#ifndef SYSTEMHELPER_H
#define SYSTEMHELPER_H

#include <Windows.h>

#pragma once

class SystemHelper
{
private:
	int screenWidth = GetSystemMetrics(SM_CXSCREEN);
	int screenHeight = GetSystemMetrics(SM_CYSCREEN);

public:
	int GetScreenWidth();
	int GetScreenHeight();

	SystemHelper();
	~SystemHelper();
};

#endif