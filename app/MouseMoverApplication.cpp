// MouseMoverApplication.cpp
#include "MouseMoverApplication.h"

MouseMoverApplication::MouseMoverApplication() {}
MouseMoverApplication::~MouseMoverApplication() {}

void MouseMoverApplication::Run(int& delta)
{
	// hide console window on startup (brief appearence possible)
	INTERACTION.CONSOLE.Hide();

	INTERACTION.ShowHelp();

	HOTKEYS.Init();

	while (GetMessage(&HOTKEYS.MESSAGE, NULL, 0, 0) != 0)
	{
		if (HOTKEYS.MESSAGE.message == WM_HOTKEY)
		{
			if (HOTKEYS.MESSAGE.wParam == 1)
			{
				Process(delta);
			}

			if (HOTKEYS.MESSAGE.wParam == 3)
			{
				INTERACTION.CONSOLE.Hide();
			}

			if (HOTKEYS.MESSAGE.wParam == 4)
			{
				INTERACTION.CONSOLE.Show();
			}
		}
	}
}

void MouseMoverApplication::Process(int& delta)
{
	OnStart();

	std::cout << "Running for.. " << std::endl << std::endl;
	std::cout << CLOCK.TIME_FORMAT;

	while (1)
	{
		while (!PeekMessage(&HOTKEYS.MESSAGE, NULL, 0, 0, PM_NOREMOVE))
		{
			MOUSE.MouseSetup();

			MOUSE.MouseMoveAbsolute(delta);

			delta = -delta;

			Sleep(1000);

			OnTick();
		}

		if (GetMessage(&HOTKEYS.MESSAGE, NULL, 0, 0) != 0)
		{
			if (HOTKEYS.MESSAGE.message == WM_HOTKEY)
			{
				if (HOTKEYS.MESSAGE.wParam == 2)
				{
					OnStop();
					return;
				}

				if (HOTKEYS.MESSAGE.wParam == 3)
				{
					INTERACTION.CONSOLE.Hide();
				}

				if (HOTKEYS.MESSAGE.wParam == 4)
				{
					INTERACTION.CONSOLE.Show();
				}
			}
		}
	}
}

void MouseMoverApplication::OnStart()
{
	CLOCK.START_CLOCK = std::chrono::system_clock::now();

	INTERACTION.CONSOLE.SetConsoleTextGreen();
	std::cout << "+++++++ Started at: " << CLOCK.CurrentDateTimeAsString() << " +++++++" << std::endl << std::endl;
	INTERACTION.CONSOLE.SetConsoleTextWhite();
}

void MouseMoverApplication::OnTick()
{
	CLOCK.CURRENT_CLOCK = std::chrono::system_clock::now();
	auto runningFor = CLOCK.CURRENT_CLOCK - CLOCK.START_CLOCK;

	const auto hrs = std::chrono::duration_cast<std::chrono::hours>(runningFor);
	const auto mins = std::chrono::duration_cast<std::chrono::minutes>(runningFor - hrs);
	const auto secs = std::chrono::duration_cast<std::chrono::seconds>(runningFor - hrs - mins);

	printf("\r");
	printf("%02dh %02dm %02ds", hrs.count(), mins.count(), secs.count());
}

void MouseMoverApplication::OnStop()
{
	INTERACTION.CONSOLE.SetConsoleTextRed();
	std::cout << std::endl << std::endl
		<< "xxxxxxx Stopped at: " << CLOCK.CurrentDateTimeAsString() << " xxxxxxx"
		<< std::endl << std::endl;
	INTERACTION.CONSOLE.SetConsoleTextWhite();
}