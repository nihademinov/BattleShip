#pragma once
void show_Bot_Board(char** board,int size)
{

    system("cls");
    show_board(BoardPlayer, sizeBoard);
    gotoxy(0, 0);
    SetConsoleTextAttribute(console, 7);

    for (int i = 0; i < size; i++)
    {
        cout << "\t\t\t\t\t\t\t";

        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == 'X')
            {
                SetConsoleTextAttribute(console, 12);
                cout << board[i][j]<<" ";
                SetConsoleTextAttribute(console, 7);


            }
            else if (board[i][j] == 'V')
            {
                SetConsoleTextAttribute(console, 2);
                cout << board[i][j]<<" ";
                SetConsoleTextAttribute(console, 7);

            }
            else 
            {
                cout << board[i][j] << " ";
            }

            
        }
        cout << endl;
    }
    SetConsoleTextAttribute(console, 7);
    
}




void Hit_Span(char** area)
{

    while (true)
    {
        int random = 1 + rand() % 15;
        int random_2 = 1 + rand() % 15;
        if (area[random][random_2] == ' ') {
            area[random][random_2] = '@';
            row = random;
            columbn = random_2;
            break;
        }
    }

    show_Bot_Board(FakeBoardBot, sizeBoard);


}

char temp = ' ';

void left_func_Hit(char** area)
{
    if (area[row][columbn - 1] == ' ' ) 
    {
        area[row][columbn] = temp;
        temp = ' ';

        area[row][columbn - 1] = '@';
        columbn--;
    }
    else if (area[row][columbn - 1] == 'X')
    {
        area[row][columbn] = temp;

        temp = 'X';
        area[row][columbn] = ' ';
        area[row][columbn - 1] = '@';
        columbn--;

    }
    else if (area[row][columbn - 1] == 'V')
    {
        area[row][columbn] = temp;

        temp = 'V';
        area[row][columbn] = ' ';

        area[row][columbn - 1] = '@';
        columbn--;
    }

}

void right_func_Hit(char** area)
{


    if (area[row][columbn + 1] == ' ' || area[row][columbn + 1] == 'X' || area[row][columbn + 1] == 'V')
    {
        area[row][columbn] = ' ';
        area[row][columbn + 1] = '@';
        columbn++;
    }

    
}

void down_func_Hit(char** area)
{
    if (area[row + 1][columbn] == ' ' || area[row + 1][columbn] == 'X' || area[row + 1][columbn] == 'V')
    {
        area[row][columbn] = ' ';
        area[row + 1][columbn] = '@';
        row++;
    }


}


void up_func_Hit(char** area)
{
    if (area[row - 1][columbn] == ' ' || area[row - 1][columbn] == 'X' || area[row - 1][columbn] == 'V')
    {
        area[row][columbn] = ' ';
        area[row - 1][columbn] = '@';
        row--;
    }

}

void check_Hit(char** area,char**fakeArea)
{
    if (area[row][columbn] == '&')
    {

        fakeArea[row][columbn] = 'V';

        show_Bot_Board(FakeBoardBot, sizeBoard);


    }
    if(area[row][columbn] == ' ')
    {

        fakeArea[row][columbn] = 'X';
        show_Bot_Board(FakeBoardBot, sizeBoard);


    }
}


void Hit_Span_Move()
{

    bool check = true;
    while (check)
    {
        int number;
        number = _getch();
        switch (number) {
        case 224:
            number = _getch();
            switch (number) {
            case 72:
                up_func_Hit(FakeBoardBot);

                show_Bot_Board(FakeBoardBot, sizeBoard);


                break;
            case 77:
                right_func_Hit(FakeBoardBot);
                show_Bot_Board(FakeBoardBot, sizeBoard);


                break;
            case 75:
                left_func_Hit(FakeBoardBot);
                show_Bot_Board(FakeBoardBot, sizeBoard);


                break;
            case 80:
                down_func_Hit(FakeBoardBot);
                show_Bot_Board(FakeBoardBot, sizeBoard);


            default:
                break;
            }
            break;
        default:
            cout << "Other Symbol" << endl;
            break;

        case 13:
            //check_Hit(BoardBot);
            check = false;
            break;
        }
    }

}
