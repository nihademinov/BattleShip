#pragma once

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
void PrintGameName()
{
	char line1[] = "* * * * *              *           * * * * * * *     * * * * * * *       *                * * * * * *      * * * * * * *           *         *      **      * * * * * *           ";
	char line2[] = "*       *             * *                *                 *             *                *                **           **         *         *              *         *                         ";
	char line3[] = "*       *            *   *               *                 *             *                *                  **                    *         *      **      *         *                    ";
	char line4[] = "*       *           *     *              *                 *             *                *                    **                  *         *      **      * * * * * *                    ";
	char line5[] = "* * * * * *        * * * * *             *                 *             *                * * * * * *            ***               * * * * * *      **      *                       ";
	char line6[] = "*         *       *         *            *                 *             *                *                         **             *         *      **      *                     ";
	char line7[] = "*         *      *           *           *                 *             *                *                           * * *        *         *      **      *                    ";
	char line8[] = "*         *     *             *          *                 *             *                *                                **      *         *      **      *                     ";
	char line9[] = "* * * * * *    *               *         *                 *             * * * * * *      * * * * * *          * * * * * * * *     *         *      **      *                            ";

	SetConsoleTextAttribute(console, 12);
	cout << line1 << endl;
	cout << line2 << endl;
	cout << line3 << endl;
	cout << line4 << endl;
	cout << line5 << endl;
	cout << line6 << endl;
	cout << line7 << endl;
	cout << line8 << endl;
	cout << line9 << endl;
	SetConsoleTextAttribute(console, 7);
	cout << endl;
	cout << endl;
	cout << endl;

}


void arrowHere(int realPosition, int arrowPosition) {
	if (realPosition == arrowPosition) {
		SetConsoleTextAttribute(console, 9);
		cout << "\t\t\t\t\t\t\t\t\t\t ----->>    ";
	}
	else {
		SetConsoleTextAttribute(console, 4);
		cout << "\t\t\t\t\t\t\t\t\t\t          ";
	}
}

bool ChoiceNewGame = false;
bool ChoiceHowToPlay = false;
bool ChoiceExit = false;
bool choice_Back_ = false;


void menu()
{
	
	int position = 1;
	int keyPressed = 0;

	while (keyPressed != 13)
	{
		system("cls");
		PrintGameName();
		arrowHere(1, position);
		if (choice_Back_)
		{
			cout << "RESUME GAME\n";

		}
		else 
		{
			cout << "NEW GAME\n";
		}
		//cout << "NEW GAME\n";
		arrowHere(2, position);
		cout << "HOW TO PLAY \n";
		arrowHere(3, position);
		cout << "EXIT \n";

		keyPressed = _getch();

		if (keyPressed == 80 && position != 3)
		{
			position++;
		}
		else if (keyPressed == 72 && position != 1)
		{
			position--;
		}
		else
		{
			position = position;
		}
	}

	switch (position)
	{
	case 1:
		system("cls");
		SetConsoleTextAttribute(console, 7);
		ChoiceNewGame = true;
		break;
	case 2:
		system("cls");
		SetConsoleTextAttribute(console, 7);
		ChoiceHowToPlay = true;
		break;
	case 3:
		system("cls");
		SetConsoleTextAttribute(console, 7);
		ChoiceExit = true;
		break;
	
	}
}
