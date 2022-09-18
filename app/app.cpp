#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT 0x0500

#include "MouseMoverApplication.h"

int main()
{
	int delta = 100; // pixels to move cursor

	MouseMoverApplication APP;

	APP.Run(delta);

	return 0;
}