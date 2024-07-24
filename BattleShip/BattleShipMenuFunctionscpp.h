#pragma once

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
void PrintGameName()
{
	SetConsoleTextAttribute(console, 12);


	const char* logo = R"V0G0N(


                                                 ______        __      _________ _________ _____    _________      _______ ____  ____ _____ ______   
                                                |_   _ \      /  \    |  _   _  |  _   _  |_   _|  |_   ___  |    /  ___  |_   ||   _|_   _|_   __ \ 
                                                  | |_) |    / /\ \   |_/ | | \_|_/ | | \_| | |      | |_  \_|   |  (__ \_| | |__| |   | |   | |__) |
                                                  |  __/.   / ____ \      | |       | |     | |   _  |  _|  _     '.___\-.  |  __  |   | |   |  ___/ 
                                                 _| |__) |_/ /    \ \_   _| |_     _| |_   _| |__/ |_| |___/ |   |\\____) |_| |  | |_ _| |_ _| |_    
                                                |_______/|____|  |____| |_____|   |_____| |________|_________|   |_______.'____||____|_____|_____|   

							          



       
)V0G0N";

	cout << logo;
	SetConsoleTextAttribute(console, 7);


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
