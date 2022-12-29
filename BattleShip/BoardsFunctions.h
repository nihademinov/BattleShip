#pragma once
//------------PLAYER BOARD CREATE------------------------------------------------------
char** CreatePlayerBoard(int size)
{
	char** areaPlayer = new char* [size];
	for (int i = 0; i < size; i++)
	{
		areaPlayer[i] = new char[size] {};
	}
	return areaPlayer;
}

void fill_PlayerBoard(char** areaPlayer, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == 0 || j == 0 || i == size - 1 || j == size - 1) {
				areaPlayer[i][j] = 220;

			}
			else {
				areaPlayer[i][j] = ' ';
			}
		}
		//cout << endl;
	}
}

void printPlayerBoard(char** areaPlayer, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << areaPlayer[i][j] << " ";
		}
		cout << endl;
	}
}


//------------BOT BOARD CREATE------------------------------------------------------

//Mouse cursorunu 0,0 a getirmek
void gotoxy(short x, short y)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { x, y };

	SetConsoleCursorPosition(hStdout, position);
}



char** CreateBotBoard(int size)
{
	char** areaPlayer = new char* [size];
	for (int i = 0; i < size; i++)
	{
		areaPlayer[i] = new char[size] {};
	}
	return areaPlayer;
}

void fill_BotBoard(char** areaPlayer, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == 0 || j == 0 || i == size - 1 || j == size - 1) {
				areaPlayer[i][j] = 220;

			}
			else {
				areaPlayer[i][j] = ' ';
			}
		}
		//cout << endl;
	}
}

void printBotBoard(char** areaPlayer, int size)
{
	//cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i < size; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < size; j++)
		{
			cout << areaPlayer[i][j] << " ";
		}
		cout << endl;
	}
}