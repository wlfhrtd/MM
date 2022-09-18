// ConsoleHelper.cpp
#include "ConsoleHelper.h"

ConsoleHelper::ConsoleHelper() {}
ConsoleHelper::~ConsoleHelper() {}

void ConsoleHelper::Hide() { ShowWindow(GetConsoleWindow(), SW_HIDE); }
void ConsoleHelper::Show() { ShowWindow(GetConsoleWindow(), SW_SHOW); }
bool ConsoleHelper::IsVisible() { return IsWindowVisible(GetConsoleWindow()) != FALSE; }
// COLORS
void ConsoleHelper::SetConsoleTextColor(int color) { SetConsoleTextAttribute(console, color); }
void ConsoleHelper::SetConsoleTextGreen() { SetConsoleTextColor(10); }
void ConsoleHelper::SetConsoleTextCyan() { SetConsoleTextColor(11); }
void ConsoleHelper::SetConsoleTextRed() { SetConsoleTextColor(12); }
void ConsoleHelper::SetConsoleTextWhite() { SetConsoleTextColor(15); }