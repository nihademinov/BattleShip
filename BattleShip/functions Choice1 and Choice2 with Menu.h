#pragma once

void Choice_1_With_Menu()
{
	int colorIndex = 1;
	const char text[] = "hellooo my game. this game producted by Eminov Nihadddd";
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; text[i] != '\0'; i++)
	{
		SetConsoleTextAttribute(console, colorIndex++);
		if (colorIndex > 9)
		{
			colorIndex = 1;
		}
		Sleep(100);
		cout << text[i];
	}

	SetConsoleTextAttribute(console, 7);



}

void Choice_2_With_Menu()
{
	int colorIndex = 1;
	const char Exit_text[] = "THANKS A LOT)";
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; Exit_text[i] != '\0'; i++)
	{
		SetConsoleTextAttribute(console, colorIndex++);
		if (colorIndex > 9)
		{
			colorIndex = 1;
		}
		Sleep(100);
		cout << Exit_text[i];
	}

	SetConsoleTextAttribute(console, 7);

}
