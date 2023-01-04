#pragma once
bool  Choice_Yes = false;
bool  Choice_No = false;
bool  Choice_Back = false;


void AskBotFillOrNot()
{
	cout << endl;
	int position = 1;
	int keyPressed = 0;

	while (keyPressed != 13)
	{
		system("cls");
		SetConsoleTextAttribute(console, 11);
		cout << "\n\n\n\n\n\n";
		cout << "\t\t\t\t\t\t\t\t\t\tDO YOU WANT YOUR BOATS FILL BY BOT?" << endl;
		arrowHere(1, position);
		cout << "YES\n";
		arrowHere(2, position);
		cout << "NO \n";
		arrowHere(3, position);
		cout << "BACK \n";

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
		Choice_Yes = true;
		break;
	case 2:
		system("cls");
		SetConsoleTextAttribute(console, 7);
		Choice_No = true;
		break;
	case 3:
		system("cls");
		SetConsoleTextAttribute(console, 7);
		Choice_Back = true;
		break;

	}
}
