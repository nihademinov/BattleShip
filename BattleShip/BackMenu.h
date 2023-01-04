#pragma once


void Back_Menu()
{

	int sizeBoard = 16;
	if (ChoiceNewGame)
	{
		AskBotFillOrNot();
		if (Choice_Yes || Choice_No)
		{
			char** BoardPlayer = CreatePlayerBoard(sizeBoard);
			fill_PlayerBoard(BoardPlayer, sizeBoard);
			printPlayerBoard(BoardPlayer, sizeBoard);

			gotoxy(0, 0);

			char** BoardBot = CreateBotBoard(sizeBoard);
			fill_BotBoard(BoardBot, sizeBoard);
			printBotBoard(BoardBot, sizeBoard);
		}
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
