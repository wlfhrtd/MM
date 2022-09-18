// HotkeysManager.cpp
#include "HotkeysManager.h"

HotkeysManager::HotkeysManager() {}
HotkeysManager::~HotkeysManager() {}

void HotkeysManager::Init()
{
	RegisterHotKey(NULL, 1, MOD_ALT | MOD_CONTROL, VK_UP);       // start
	RegisterHotKey(NULL, 2, MOD_ALT | MOD_CONTROL, VK_DOWN);     // stop
	RegisterHotKey(NULL, 3, MOD_ALT | MOD_CONTROL, VK_LEFT);     // hide console window
	RegisterHotKey(NULL, 4, MOD_ALT | MOD_CONTROL, VK_RIGHT);    // show console window
	// NOTICE
	// when show/hide console during running
	// expect lag due to 1s sleep 
}