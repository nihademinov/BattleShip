#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <consoleapi.h>
#include <stdio.h>




using namespace std;


#include "creat boards.h"

int sizeBoard = 16;

char** BoardBot = CreateBotBoard(sizeBoard);

char** BoardPlayer = CreatePlayerBoard(sizeBoard);
#include "BattleShipMenuFunctionscpp.h"
#include"PlayerBoards.h"
#include "BotBoardsFunctions.h"
#include "functions Choice1 and Choice2 with Menu.h"
#include "PutBoatsOnArea.h"
#include "BackMenu.h"
#include "choice Boat size.h"


int main() {
	srand(time(NULL));
	while (true)
	{
		menu();
		//int sizeBoard = 16;
		if (ChoiceNewGame)
		{
			AskBotFillOrNot();
			if (Choice_Yes)
			{
				//char** BoardPlayer = CreatePlayerBoard(sizeBoard);
				fill_PlayerBoard(BoardPlayer, sizeBoard);
				fill_Random_By_Bot_4(BoardPlayer);
				fill_Random_By_Bot_3(BoardPlayer);
				fill_Random_By_Bot_3(BoardPlayer);
				fill_Random_By_Bot_2(BoardPlayer);
				fill_Random_By_Bot_2(BoardPlayer);
				fill_Random_By_Bot_2(BoardPlayer);
				fill_Random_By_Bot_1(BoardPlayer);
				fill_Random_By_Bot_1(BoardPlayer);
				fill_Random_By_Bot_1(BoardPlayer);
				fill_Random_By_Bot_1(BoardPlayer);

				printPlayerBoard(BoardPlayer, sizeBoard);


				gotoxy(0, 0);

				//char** BoardBot = CreateBotBoard(sizeBoard);
				fill_BotBoard(BoardBot, sizeBoard);
				fill_Random_By_Bot_4(BoardBot);
				fill_Random_By_Bot_3(BoardBot);
				fill_Random_By_Bot_3(BoardBot);
				fill_Random_By_Bot_2(BoardBot);
				fill_Random_By_Bot_2(BoardBot);
				fill_Random_By_Bot_2(BoardBot);
				fill_Random_By_Bot_1(BoardBot);
				fill_Random_By_Bot_1(BoardBot);
				fill_Random_By_Bot_1(BoardBot);
				fill_Random_By_Bot_1(BoardBot);
				printOnlyEmpytyBotBoard(BoardBot, sizeBoard);
				

				//printBotBoard(BoardBot, sizeBoard);
				
			
				break;


			}

			if (Choice_No)
			{
				char** BoardPlayer = CreatePlayerBoard(sizeBoard);
				fill_PlayerBoard(BoardPlayer, sizeBoard);
				printPlayerBoard(BoardPlayer, sizeBoard);
				
				gotoxy(0, 0);

				char** BoardBot = CreateBotBoard(sizeBoard);
				fill_BotBoard(BoardBot, sizeBoard);
				fill_Random_By_Bot_4(BoardBot);
				fill_Random_By_Bot_3(BoardBot);
				fill_Random_By_Bot_3(BoardBot);
				fill_Random_By_Bot_2(BoardBot);
				fill_Random_By_Bot_2(BoardBot);
				fill_Random_By_Bot_2(BoardBot);
				fill_Random_By_Bot_1(BoardBot);
				fill_Random_By_Bot_1(BoardBot);
				fill_Random_By_Bot_1(BoardBot);
				fill_Random_By_Bot_1(BoardBot);
				printOnlyEmpytyBotBoard(BoardBot, sizeBoard);
				AskToPlayer_Vertical_Or_Horizontal();
				AskToPlayer();
				if (choice_Back_)
				{
					choice_Back_ = false;
					choice_vertical = false;
					choice_horizontal = false;
					ChoiceNewGame = false;
					ChoiceHowToPlay = false;
					ChoiceExit = false;
					Choice_Back = false;
					continue;
				}

				if (choice_vertical)
				{
					if (boat_size_1)
					{
						boatSpan_1(BoardPlayer);
						//askkk();
					}

					if (boat_size_2)
					{

					}

					if (boat_size_3)
					{

					}

					if (boat_size_4)
					{

					}
				}

				if (choice_horizontal)
				{

				}

				//printBotBoard(BoardBot, sizeBoard);

				break;
			}

			if (Choice_Back)
			{
				ChoiceNewGame = false;
				ChoiceHowToPlay = false;
				ChoiceExit = false;
				Choice_Back = false;

				continue;


			}

		}

		if (ChoiceHowToPlay)
		{
			Choice_1_With_Menu();
			break;
		}

		if (ChoiceExit)
		{
			Choice_2_With_Menu();
			break;
		}
	}
	
	
	
}