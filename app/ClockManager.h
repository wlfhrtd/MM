// ClockManager.h
#define _CRT_SECURE_NO_WARNINGS

#ifndef CLOCKMANAGER_H
#define CLOCKMANAGER_H

#include <chrono>
#include <string>

#pragma once

class ClockManager
{
private:

public:
	std::chrono::system_clock::time_point START_CLOCK;
	std::chrono::system_clock::time_point CURRENT_CLOCK;

	const std::string TIME_FORMAT = "00h 00m 00s";

	const std::string CurrentDateTimeAsString();

	ClockManager();
	~ClockManager();
};

#endif