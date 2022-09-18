// ClockManager.cpp
#include "ClockManager.h"

ClockManager::ClockManager() {}
ClockManager::~ClockManager() {}

const std::string ClockManager::CurrentDateTimeAsString() {
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);

	strftime(buf, sizeof(buf), "%X %A %d-%m-%Y", &tstruct);

	return buf;
}