#pragma once

//------------BOT BOARD CREATE------------------------------------------------------

//Mouse cursorunu 0,0 a getirmek
void gotoxy(short x, short y)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { x, y };

	SetConsoleCursorPosition(hStdout, position);
}


//
//char** CreateBotBoard(int size)
//{
//	char** areaPlayer = new char* [size];
//	for (int i = 0; i < size; i++)
//	{
//		areaPlayer[i] = new char[size] {};
//	}
//	return areaPlayer;
//}
//
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
	}
}

void printBotBoard(char** areaPlayer, int size)
{
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


void printOnlyEmpytyBotBoard(char** board, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\t\t\t\t\t\t\t";

		for (int j = 0; j < size; j++)
		{
			if (board[i][j] == char(220))
			{
				cout << board[i][j] << " ";

			}
			
			else 
			{
				cout<<"  ";
			}
			
		}
		cout << endl;
	}
}

//----------------------BOT BOARD RANDOMLY FILL---------------------------------------------






void fill_Random_By_Bot_4(char**BotBoard)
{

	int random_Choice_Vertical_or_Horizontal = 1 + rand() % 2;
	if (random_Choice_Vertical_or_Horizontal > 1)
	{
		for (int i = 0; i < 12; i++)
		{
			int random_1 = 1 + rand() % 14;  //1
			int random_2 = 1 + rand() % 14;   //10
			bool check_Boat_4 = BotBoard[random_1][random_2] == ' ' && BotBoard[random_1 + 1][random_2] == ' ' && BotBoard[random_1 + 2][random_2] == ' ' && BotBoard[random_1 + 3][random_2] == ' ';
			//bool Check_Arround_Empty = 
			if (check_Boat_4) {
				BotBoard[random_1][random_2] = '&';
				BotBoard[random_1 + 1][random_2] = '&';
				BotBoard[random_1 + 2][random_2] = '&';
				BotBoard[random_1 + 3][random_2] = '&';
				break; 
			}
			else {
				i--;
			}
		}
	}

	else
	{
		for (int i = 0; i < 12; i++)
		{
			int random_1 = 1 + rand() % 14;  //1
			int random_2 = 1 + rand() % 14;   //10
			bool check_Boat_4 = BotBoard[random_1][random_2] == ' ' && BotBoard[random_1][random_2 + 1] == ' ' && BotBoard[random_1][random_2 + 2] == ' ' && BotBoard[random_1][random_2 + 3] == ' ';
			if (check_Boat_4) {
				BotBoard[random_1][random_2] = '&';
				BotBoard[random_1][random_2 + 1] = '&';
				BotBoard[random_1][random_2 + 2] = '&';
				BotBoard[random_1][random_2 + 3] = '&';
				break;
			}
			else {
				i--;
			}
		}
	}
	

	
}


void fill_Random_By_Bot_3(char** BotBoard)
{
	int random_Choice_Vertical_or_Horizontal = 1 + rand() % 2;
	if (random_Choice_Vertical_or_Horizontal > 1)
	{
		for (int i = 0; i < 12; i++)
		{
			int random_1 = 1 + rand() % 11;  //1
			int random_2 = 1 + rand() % 11;   //10
			bool check_Boat_3 = BotBoard[random_1][random_2] == ' ' && BotBoard[random_1 + 1][random_2] == ' ' && BotBoard[random_1 + 2][random_2] == ' ';
			bool check_Arround_Empty_1 = BotBoard[random_1 - 1][random_2] != '&'  && BotBoard[random_1][random_2 - 1] != '&'  && BotBoard[random_1][random_2 + 1] != '&' ;
			bool check_Arround_Empty_2 = BotBoard[random_1 + 1][random_2 - 1] != '&'  && BotBoard[random_1 + 1][random_2 + 1] != '&' ;
			bool check_Arround_Empty_3 = BotBoard[random_1 + 2][random_2 - 1] != '&' && BotBoard[random_1 + 2][random_2 + 1] != '&' && BotBoard[random_1 + 3][random_2] != '&';


			if (check_Boat_3 && check_Arround_Empty_1 && check_Arround_Empty_2 && check_Arround_Empty_3) {
				BotBoard[random_1][random_2] = '&';
				BotBoard[random_1 + 1][random_2] = '&';
				BotBoard[random_1 + 2][random_2] = '&';
				break;
			}
			else {
				i--;
			}
		}
	}

	else
	{
		for (int i = 0; i < 12; i++)
		{
			int random_1 = 1 + rand() % 11;  //1
			int random_2 = 1 + rand() % 11;   //10
			bool check_Boat_3 = BotBoard[random_1][random_2] == ' ' && BotBoard[random_1][random_2 + 1] == ' ' && BotBoard[random_1][random_2 + 2] == ' ';
			bool check_Arround_Empty_1 = BotBoard[random_1 - 1][random_2] != '&' && BotBoard[random_1][random_2 - 1] != '&' && BotBoard[random_1 + 1][random_2] != '&';
			bool check_Arround_Empty_2 = BotBoard[random_1 - 1][random_2 + 1] != '&' && BotBoard[random_1 + 1][random_2 + 1] != '&' ;
			bool check_Arround_Empty_3 = BotBoard[random_1 -1 ][random_2 + 2] != '&'  && BotBoard[random_1 + 1][random_2 + 2] != '&'  && BotBoard[random_1 ][random_2 + 3] != '&' ;


			if (check_Boat_3 && check_Arround_Empty_1 && check_Arround_Empty_2 && check_Arround_Empty_3) {
				BotBoard[random_1][random_2] = '&';
				BotBoard[random_1][random_2 + 1] = '&';
				BotBoard[random_1][random_2 + 2] = '&';
				break;
			}
			else {
				i--;
			}



		}
	}
}


void fill_Random_By_Bot_2(char** BotBoard)
{
	int random_Choice_Vertical_or_Horizontal = 1 + rand() % 2;
	if (random_Choice_Vertical_or_Horizontal > 1)
	{
		for (int i = 0; i < 12; i++)
		{
			int random_1 = 1 + rand() % 12;  //1
			int random_2 = 1 + rand() % 12;   //10
			bool check_Boat_2 = BotBoard[random_1][random_2] == ' ' && BotBoard[random_1 + 1][random_2] == ' ';
			bool check_Arround_Empty_1 = BotBoard[random_1 - 1][random_2] != '&'  && BotBoard[random_1 ][random_2 - 1] != '&'  && BotBoard[random_1][random_2 + 1] != '&'  ;
			bool check_Arround_Empty_2 = BotBoard[random_1 + 1][random_2 - 1 ] != '&' && BotBoard[random_1 + 1][random_2 + 1] != '&'  && BotBoard[random_1 + 2][random_2] != '&' ;
			if (check_Boat_2 && check_Arround_Empty_1 && check_Arround_Empty_2) {
				BotBoard[random_1][random_2] = '&';
				BotBoard[random_1 + 1][random_2] = '&';
				break;
			}
			else {
				i--;
			}
		}
	}

	else
	{
		for (int i = 0; i < 12; i++)
		{
			int random_1 = 1 + rand() % 12;  //1
			int random_2 = 1 + rand() % 12;   //10
			bool check_Boat_2 = BotBoard[random_1][random_2] == ' ' && BotBoard[random_1][random_2 + 1] == ' '  ;
			bool check_Arround_Empty_1 = BotBoard[random_1 - 1][random_2] != '&' && BotBoard[random_1][random_2 - 1] != '&' && BotBoard[random_1 + 1][random_2 ] != '&';
			bool check_Arround_Empty_2 = BotBoard[random_1 - 1][random_2 + 1] != '&' && BotBoard[random_1 + 1][random_2 + 1] != '&' && BotBoard[random_1 ][random_2 + 2] != '&';
			if (check_Boat_2 && check_Arround_Empty_1 && check_Arround_Empty_2) {
				BotBoard[random_1][random_2] = '&';
				BotBoard[random_1][random_2 + 1] = '&';
				break;
			}
			else {
				i--;
			}



		}
	}
}



void fill_Random_By_Bot_1(char** BotBoard)
{
	int random_Choice_Vertical_or_Horizontal = 1 + rand() % 2;
	if (random_Choice_Vertical_or_Horizontal > 1)
	{
		for (int i = 0; i < 12; i++)
		{
			int random_1 = 1 + rand() % 13;  //1
			int random_2 = 1 + rand() % 13;   //10
			bool check_Boat_2 = BotBoard[random_1][random_2] == ' '  ;
			bool check_Arround_Empty_1 = BotBoard[random_1 + 1][random_2] != '&' && BotBoard[random_1 - 1][random_2] != '&' && BotBoard[random_1][random_2 + 1] != '&' && BotBoard[random_1][random_2 - 1] != '&' ;
			if (check_Boat_2 && check_Arround_Empty_1) {
				
				
				BotBoard[random_1][random_2] = '&';
				break;
				
			}
			else {
				i--;
			}
		}
	}

	else
	{
		for (int i = 0; i < 12; i++)
		{
			int random_1 = 1 + rand() % 13;  //1
			int random_2 = 1 + rand() % 13;   //10
			bool check_Boat_2 = BotBoard[random_1][random_2] == ' ';
			bool check_Arround_Empty_1 = BotBoard[random_1 + 1][random_2] != '&' && BotBoard[random_1 - 1][random_2] != '&' && BotBoard[random_1][random_2 + 1] != '&' && BotBoard[random_1][random_2 - 1] != '&';

			if (check_Boat_2&&check_Arround_Empty_1) {
				
				BotBoard[random_1][random_2] = '&';
				break;
				
				
			}
			else {
				i--;
			}



		}
	}
}
