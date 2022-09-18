// MouseHelper.cpp
#include "MouseHelper.h"

MouseHelper::MouseHelper() {}
MouseHelper::~MouseHelper() {}

void MouseHelper::MouseSetup()
{
	buffer->type = INPUT_MOUSE;
	buffer->mi.dx = (0 * (0xFFFF / SYSTEM.GetScreenWidth()));
	buffer->mi.dy = (0 * (0xFFFF / SYSTEM.GetScreenHeight()));
	buffer->mi.mouseData = 0;
	buffer->mi.dwFlags = MOUSEEVENTF_ABSOLUTE;
	buffer->mi.time = 0;
	buffer->mi.dwExtraInfo = 0;
}

void MouseHelper::MouseMoveAbsolute(const int& delta)
{
	buffer->mi.dx = ((X + delta) * (0xFFFF / SYSTEM.GetScreenWidth()));
	buffer->mi.dy = ((Y + delta) * (0xFFFF / SYSTEM.GetScreenHeight()));
	buffer->mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE);

	SendInput(1, buffer, sizeof(INPUT));
}