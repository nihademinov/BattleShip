#pragma once
int row = 0;
int columbn = 0;


void show_board(char** board, int size) {
    system("cls");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}


void boatSpan_1(char** area) {
    //system("cls");

    while (true)
    {
        int random = 1 + rand() % 15;
        int random_2 = 1 + rand() % 15;
        if (area[random][random_2] == ' ') {
            area[random][random_2] = '&';
            row = random;
            columbn = random_2;
            break;
        }
    }

    show_board(BoardPlayer, sizeBoard);
    printOnlyEmpytyBotBoard(BoardBot, sizeBoard);

    
}

void left_func(char** area) {
    if (area[row][columbn - 1] == ' ') {
        area[row][columbn] = ' ';
        area[row][columbn - 1] = '&';
        columbn--;
    } 
    else
    {
        cout << "it is not empty" << endl;
    }

}

void right_func(char** area) {
    if (area[row][columbn + 1] == ' ') {
        area[row][columbn] = ' ';
        area[row][columbn + 1] = '&';
        columbn++;
    }
    else
    {
        cout << "it is not empty" << endl;
    }
    
}

void down_func(char** area) {
    if (area[row + 1][columbn] == ' ') {
        area[row][columbn] = ' ';
        area[row + 1][columbn] = '&';
        row++;
    }
    else
    {
        cout << "it is not empty" << endl;
    }

}


void up_func(char** area) 
{
    if (area[row - 1][columbn] == ' ') 
    {
        area[row][columbn] = ' ';
        area[row - 1][columbn] = '&';
        row--;
    }
    else 
    {
        cout << "it is not empty" << endl;

    }
}



void askkk()
{
   

    while (true)
    {
        int number;
        number = _getch();
        switch (number) {
        case 224:
            number = _getch();
            switch (number) {
            case 72:
                up_func(BoardPlayer);

                show_board(BoardPlayer, sizeBoard);
                break;
            case 77:
                right_func(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                printOnlyEmpytyBotBoard(BoardBot, sizeBoard);
                break;
            case 75:
                left_func(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                printOnlyEmpytyBotBoard(BoardBot, sizeBoard);

                break;
            case 80:
                down_func(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                printOnlyEmpytyBotBoard(BoardBot, sizeBoard);

            default:
                break;
            }
            break;
        default:
            cout << "Other Symbol" << endl;
            break;
        }
    }

}
