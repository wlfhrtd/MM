// HotkeysManager.h
#ifndef HOTKEYSMANAGER_H
#define HOTKEYSMANAGER_H

#include <Windows.h>

#pragma once

class HotkeysManager
{
private:

public:
	MSG MESSAGE = { 0 };

	void Init();

	HotkeysManager();
	~HotkeysManager();
};

#endif