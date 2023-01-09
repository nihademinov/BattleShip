#pragma once

void ColorText(const char* text)
{
	int colorIndex = 1;

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

void Choice_1_With_Menu()
{
	const char text[] = "hellooo my game. this game producted by Eminov Nihadddd";
	
	ColorText(text);

	
}

void Choice_2_With_Menu()
{
	const char Exit_text[] = "THANKS A LOT)";
	ColorText(Exit_text);
}
