// ConsoleHelper.h
#ifndef CONSOLEHELPER_H
#define CONSOLEHELPER_H

#include <Windows.h>

#pragma once

class ConsoleHelper
{
private:
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

public:
	void Hide();
	void Show();
	bool IsVisible();
	// COLORS
	void SetConsoleTextColor(int color);
	void SetConsoleTextGreen();
	void SetConsoleTextCyan();
	void SetConsoleTextRed();
	void SetConsoleTextWhite();

	ConsoleHelper();
	~ConsoleHelper();
};

#endif