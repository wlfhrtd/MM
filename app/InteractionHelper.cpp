// InteractionHelper.cpp
#include "InteractionHelper.h"

InteractionHelper::InteractionHelper() {}
InteractionHelper::~InteractionHelper() {}

void InteractionHelper::ShowHelp()
{
	CONSOLE.SetConsoleTextCyan();
	std::cout << "------- Usage Help -------" << std::endl << std::endl
		<< "ALT + CTRL + ArrowUp       => Start" << std::endl
		<< "ALT + CTRL + ArrowDown     => Stop" << std::endl
		<< "ALT + CTRL + ArrowLeft     => Hide Console Window" << std::endl
		<< "ALT + CTRL + ArrowRight    => Show Console Window" << std::endl
		<< std::endl << "------- END OF HELP -------" << std::endl << std::endl;
	CONSOLE.SetConsoleTextWhite();
}