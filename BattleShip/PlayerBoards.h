#pragma once

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

//----------------boat size choice-------------------------------------------------------------------

void arrowHere_2(int realPosition, int arrowPosition) {
	if (realPosition == arrowPosition) {
		SetConsoleTextAttribute(console, 9);
		cout << " ----->>    ";
	}
	else {
		SetConsoleTextAttribute(console, 4);
		cout << "          ";
	}
}

bool boat_size_1 = false;
bool boat_size_2 = false;
bool boat_size_3 = false;
bool boat_size_4 = false;
//bool choice_Back_ = false;


void AskToPlayer()
{
	cout << endl;
	int position = 1;
	int keyPressed = 0;

	while (keyPressed != 13)
	{
		system("cls");
		SetConsoleTextAttribute(console, 11);
		cout << "\n\n\n\n\n\n";
		cout << "PLEASE,CHOICE YOUR BOAT SIZE" << endl;
		arrowHere_2(1, position);
		cout << "BOAT SIZE 1\n";
		arrowHere_2(2, position);
		cout << "BOAT SIZE 2 \n";
		arrowHere_2(3, position);
		cout << "BOAT SIZE 3 \n";
		arrowHere_2(4, position);
		cout << "BOAT SIZE 4 \n";
		arrowHere_2(5, position);
		cout << "BACK \n";


		keyPressed = _getch();

		if (keyPressed == 80 && position != 5)
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
		boat_size_1 = true;
		break;
	case 2:
		system("cls");
		SetConsoleTextAttribute(console, 7);
		boat_size_2 = true;
		break;
	case 3:
		system("cls");
		SetConsoleTextAttribute(console, 7);
		boat_size_3 = true;
		break;


	case 4:
		system("cls");
		SetConsoleTextAttribute(console, 7);
		boat_size_4 = true;
		break;
	case 5:
		system("cls");
		SetConsoleTextAttribute(console, 7);
		choice_Back_ = true;
		break;

	}
}
