#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <consoleapi.h>
#include <stdio.h>




using namespace std;

#include "BattleShipMenuFunctionscpp.h"
#include "BoardsFunctions.h"
#include "functions Choice1 and Choice2 with Menu.h"

int main() {
	PrintGameName();
	menu();
	int sizeBoard = 16;
	if (ChoiceNewGame)
	{
		char** BoardPlayer = CreatePlayerBoard(sizeBoard);
		fill_PlayerBoard(BoardPlayer, sizeBoard);
		printPlayerBoard(BoardPlayer, sizeBoard);

		gotoxy(0, 0);

		char** BoardBot = CreateBotBoard(sizeBoard);
		fill_BotBoard(BoardBot, sizeBoard);
		printBotBoard(BoardBot, sizeBoard);


	}

	if (ChoiceHowToPlay)
	{
		Choice_1_With_Menu();
	}

	if (ChoiceExit)
	{
		Choice_2_With_Menu();
	}
	
	
}