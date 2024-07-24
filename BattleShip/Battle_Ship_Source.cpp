#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <consoleapi.h>
#include <stdio.h>




using namespace std;


#include "creat boards.h"

int sizeBoard = 16;

char** BoardBot = CreateBotBoard(sizeBoard);
char** FakeBoardBot = CreateBotBoard(sizeBoard);

char** BoardPlayer = CreatePlayerBoard(sizeBoard);
#include "BattleShipMenuFunctionscpp.h"
#include"PlayerBoards.h"
#include "BotBoardsFunctions.h"
#include "functions Choice1 and Choice2 with Menu.h"
#include "PutBoatsOnArea.h"
#include "Battle sizes horizontal.h"
#include "Battle sizes vertical.h"
#include "Hit_Player.h"
#include "Hit_Bot.h"


int main() {
	srand(time(NULL));
	while (true)
	{
		menu();
		if (ChoiceNewGame)
		{
			AskBotFillOrNot();
			if (Choice_Yes)
			{
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

				fill_BotBoard(BoardBot, sizeBoard);
				fill_BotBoard(FakeBoardBot, sizeBoard);
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
			
				bool Loop_check = true;

				while (Loop_check)
				{
					if (score_Bot == 20 || score_Player == 20)
					{
						Loop_check = false;
						break;

					}

					while (check_)
					{

						Hit_Span(FakeBoardBot);


						Hit_Span_Move();
						check_ = false;
					}

					if (!check_)
					{
						while (check_Player_board)
						{
							if (check_Player_board && check_Seccond_hit)
							{
								Clever_Bot_Hit(BoardPlayer);
							}
							else
							{
								Hit_Bot_to_Player(BoardPlayer);
								check_ = false;
							}
							
						}
						if (!check_Player_board)
						{
							check_ = true;
							check_Player_board = true;
						}
						
					}
				}

				
				


				if (score_Bot == 20)
				{

					const char* End_text_bot = "YOU ARE LOSER.TRY AGAIN";
					cout << endl;
					cout << endl;
					ColorText(End_text_bot);
				}
				if (score_Player == 20)
				{
					const char* End_text_player = "YOU ARE WINNER.GOOD JOB";
					cout << endl;
					cout << endl;
					ColorText(End_text_player);
				}
				break;


			}

			if (Choice_No)
			{
				fill_PlayerBoard(BoardPlayer, sizeBoard);
				printPlayerBoard(BoardPlayer, sizeBoard);
				
				gotoxy(0, 0);

				fill_BotBoard(BoardBot, sizeBoard);
				fill_BotBoard(FakeBoardBot, sizeBoard);
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
				int count_choice_battle_1 = 0;
				int count_choice_battle_2 = 0;
				int count_choice_battle_3 = 0;
				int count_choice_battle_4 = 0;
				bool check_While_Loop = true;

				while (check_While_Loop)
				{
					if (count_choice_battle_1 + count_choice_battle_2 + count_choice_battle_3 + count_choice_battle_4 == 10)
					{
						check_While_Loop = false;
						break;
					}

					AskToPlayer();
					
					if (choice_Back_)
					{
						ChoiceNewGame = false;
						ChoiceHowToPlay = false;
						ChoiceExit = false;
						menu();
						if (ChoiceHowToPlay)
						{
							Choice_1_With_Menu();
							int key;
							key = _getch();
							if (key == 13)
							{
								continue;
							}
						}

						if (ChoiceExit)
						{
							Choice_2_With_Menu();
							break;
						}
						choice_Back_ = false;

						continue;
					}
					//-----------------Check Battle count-----------------------------------
					if (count_choice_battle_1 == 4)
					{
						boat_size_1 = false;
					}

					if (count_choice_battle_2 == 3)
					{
						boat_size_2 = false;
					}

					if (count_choice_battle_3 == 2)
					{
						boat_size_3 = false;
					}

					if (count_choice_battle_4 == 1)
					{
						boat_size_4 = false;
					}

			
					if (boat_size_1)
					{
						
						count_choice_battle_1++;
						boatSpan_1(BoardPlayer);
						Battle_Size_1_Move();
						boat_size_1 = false;
						continue;
					}

					if (boat_size_2)
					{
						AskToPlayer_Vertical_Or_Horizontal();

						if (choice_vertical)
						{
							count_choice_battle_2++;
							boatSpan_2_vertical(BoardPlayer);
							Battle_Size_2_Move_vertical();
							boat_size_2 = false;
							choice_vertical = false;
						}

						if (choice_horizontal)
						{
							count_choice_battle_2++;
							boatSpan_2(BoardPlayer);
							Battle_Size_2_Move();
							boat_size_2 = false;
							choice_horizontal = false;
						}
						if (choice_Back_Horizontal_vertical_Menu)
						{
							boat_size_1 = false;
							boat_size_2 = false;
							boat_size_3 = false;
							boat_size_4 = false;
							choice_horizontal = false;
							choice_vertical = false;
							continue;

						}
				
					}

					if (boat_size_3)
					{

						AskToPlayer_Vertical_Or_Horizontal();

						if (choice_vertical)
						{
							count_choice_battle_3++;
							boatSpan_3_vertical(BoardPlayer);
							Battle_Size_3_Move_vertical();
							boat_size_3 = false;
							choice_vertical = false;
						}

						if (choice_horizontal)
						{
							count_choice_battle_3++;
							boatSpan_3(BoardPlayer);
							Battle_Size_3_Move();
							boat_size_3 = false;
							choice_horizontal = false;
						}

					}

					if (boat_size_4)
					{
						AskToPlayer_Vertical_Or_Horizontal();

						if (choice_vertical)
						{
							count_choice_battle_4++;
							boatSpan_4_vertical(BoardPlayer);
							Battle_Size_4_Move_vertical();
							boat_size_4 = false;
							choice_vertical = false;
						}

						if (choice_horizontal)
						{
							count_choice_battle_4++;
							boatSpan_4(BoardPlayer);
							Battle_Size_4_Move();
							boat_size_4 = false;
							choice_horizontal = false;
						}
					}
				}
				
				

		

				bool Loop_check_2 = true;
				while (Loop_check_2)
				{
					if (count_bot_Battle == 20 || count_player_Battle == 20)
					{
						Loop_check_2 = false;
						break;
					}

					while (check_)
					{

						Hit_Span(FakeBoardBot);



						Hit_Span_Move();
					}

					if (!check_)
					{
						while (check_Player_board)
						{
							Hit_Bot_to_Player(BoardPlayer);
							check_ = false;
						}
						if (!check_Player_board)
						{
							check_ = true;
							check_Player_board = true;
						}

					}
				}

				if (count_player_Battle == 20)
				{

					const char* End_text_bot = "YOU ARE LOSER.TRY AGAIN";
					cout << endl;
					cout << endl;
					ColorText(End_text_bot);
				}
				if (count_bot_Battle == 20)
				{
					const char* End_text_player = "YOU ARE WINNER.GOOD JOB";
					cout << endl;
					cout << endl;
					ColorText(End_text_player);
				}


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
