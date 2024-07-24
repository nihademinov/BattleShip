#pragma once

int row = 0;
int columbn = 0;


void show_board(char** board, int size)
{
    system("cls");
    SetConsoleTextAttribute(console, 7);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == 'X')
            {
                SetConsoleTextAttribute(console, 12);
                cout << board[i][j] << " ";
                SetConsoleTextAttribute(console, 7);


            }
            else if (board[i][j] == 'V')
            {
                SetConsoleTextAttribute(console, 2);
                cout << board[i][j] << " ";
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
//-------------------------------------------------BATTLE SIZE 1-------------------------------------------------------------


void boatSpan_1(char** area)
{

    while (true)
    {
        int random = 1 + rand() % 15;
        int random_2 = 1 + rand() % 15;
        bool check_1 = area[random][random_2] == ' ' && area[random + 1][random_2] == ' ' && area[random - 1][random_2] == ' ' && area[random][random_2 - 1] == ' ' && area[random][random_2 + 1] == ' ' && area[random - 1][random_2 - 1] == ' ' && area[random + 1][random_2 - 1] == ' ' && area[random + 1][random_2 + 1] == ' ' && area[random - 1][random_2 + 1] == ' ';

        if (check_1) {
            area[random][random_2] = '&';
            row = random;
            columbn = random_2;
            break;
        }
    }

    show_board(BoardPlayer, sizeBoard);
  
}



void left_func_Battle_size_1(char** area)
{
    if (area[row][columbn - 1] == ' ') 
    {
        bool check_arround_1 = area[row][columbn - 2] != '&' && area[row - 1][columbn - 2] != '&' && area[row + 1][columbn - 2] != '&' ;
        if (check_arround_1 )
        {
            area[row][columbn] = ' ';
            area[row][columbn - 1] = '&';
            columbn--;
        }
        
    }

}

void right_func_Battle_size_1(char** area)
{
    if (area[row][columbn + 1] == ' ')
    {
        bool check_arround_1 = area[row][columbn + 2] != '&' && area[row - 1][columbn + 2] != '&' && area[row + 1][columbn + 2] != '&';
        if (check_arround_1)
        {
            area[row][columbn] = ' ';
            area[row][columbn + 1] = '&';
            columbn++;
        }
       
    }
}

void down_func_Battle_size_1(char** area)
{
    if (area[row + 1][columbn] == ' ')
    {
        bool check_arround_1 = area[row + 2][columbn + 1] != '&' && area[row + 2][columbn] != '&' && area[row + 2][columbn - 1] != '&';
        if (check_arround_1)
        {
            area[row][columbn] = ' ';
            area[row + 1][columbn] = '&';
            row++;
        }

    }


}


void up_func_Battle_size_1(char** area)
{
    if (area[row - 1][columbn] == ' ')
    {
        bool check_arround_1 = area[row - 2][columbn + 1] != '&' && area[row - 2][columbn] != '&' && area[row - 2][columbn - 1] != '&';
        if (check_arround_1)
        {
            area[row][columbn] = ' ';
            area[row - 1][columbn] = '&';
            row--;
        }
       
    }

}


void Battle_Size_1_Move()
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
                up_func_Battle_size_1(BoardPlayer);

                show_board(BoardPlayer, sizeBoard);
                break;
            case 77:
                right_func_Battle_size_1(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                break;
            case 75:
                left_func_Battle_size_1(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

                break;
            case 80:
                down_func_Battle_size_1(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

            default:
                break;
            }
            break;
        default:
            cout << "Other Symbol" << endl;
            break;

        case 13:
            check = false;
            break;
        }
    }

}

//-----------------------------------------BATTLE SIZE 2---------------------------------------------------------
void boatSpan_2(char** area)
{

    while (true)
    {
        int random = 1 + rand() % 15;
        int random_2 = 1 + rand() % 15;
        bool check_1 = area[random][random_2] == ' ' && area[random + 1][random_2] == ' ' && area[random - 1][random_2] == ' ' && area[random][random_2 - 1] == ' ' && area[random - 1][random_2 - 1] == ' ' && area[random + 1][random_2 - 1] == ' ';
        bool check_2 = area[random][random_2 + 1] == ' ' && area[random - 1][random_2 + 1] == ' ' && area[random + 1][random_2 + 1] == ' ' && area[random][random_2 + 3] == ' ' && area[random + 1][random_2 + 2] == ' ' && area[random - 1][random_2 + 2] == ' ';

        if (check_1 && check_2) {
            area[random][random_2] = '&';
            area[random][random_2 + 1] = '&';
            row = random;
            columbn = random_2;
            break;
        }
    }

    show_board(BoardPlayer, sizeBoard);
   
}

void left_func_Battle_size_2(char** area)
{
    if (area[row][columbn - 1] == ' ') 
    {
        bool check_arround_1 = area[row][columbn - 2] != '&' && area[row - 1][columbn - 2] != '&' && area[row + 1][columbn - 2] != '&';
        if (check_arround_1)
        {
            area[row][columbn] = ' ';
            area[row][columbn - 1] = '&';
        }
    

        if (area[row][columbn] == ' ')
        {
            area[row][columbn + 1] = ' ';
            area[row][columbn] = '&';
            columbn--;
        }
    }

}

void right_func_Battle_size_2(char** area)
{
   
    if (area[row][columbn + 1 + 1] == ' ')
    {
        bool check_arround_2 = area[row][columbn + 3] != '&' && area[row - 1][columbn + 3] != '&' && area[row + 1][columbn + 3] != '&';
        if ( check_arround_2)
        {
            area[row][columbn + 1] = ' ';
            area[row][columbn + 1 + 1] = '&';
        }
      
        if (area[row][columbn + 1] == ' ')
        {
            area[row][columbn] = ' ';
            area[row][columbn + 1] = '&';
            columbn++;
        }

    }
}

void down_func_Battle_size_2(char** area)
{
    if (area[row + 1][columbn] == ' ')
    {
        bool check_arround_1 = area[row + 2][columbn + 1] != '&' && area[row + 2][columbn] != '&' && area[row + 2][columbn - 1] != '&';
        bool check_arround_2 = area[row + 2][columbn + 2] != '&' && area[row + 2][columbn + 1] != '&' && area[row + 2][columbn] != '&';
        if (check_arround_1 && check_arround_2)
        {
            area[row][columbn] = ' ';
            area[row + 1][columbn] = '&';

            if (area[row + 1][columbn + 1] == ' ')
            {
                area[row][columbn + 1] = ' ';
                area[row + 1][columbn + 1] = '&';
                row++;

            }
        }
        
       

    }
}


void up_func_Battle_size_2(char** area)
{
    if (area[row - 1][columbn] == ' ')
    {
        bool check_arround_1 = area[row - 2][columbn + 1] != '&' && area[row - 2][columbn] != '&' && area[row - 2][columbn - 1] != '&';
        bool check_arround_2 = area[row - 2][columbn + 2] != '&' && area[row - 2][columbn + 1] != '&' && area[row - 2][columbn] != '&';
        if (check_arround_1 && check_arround_2)
        {
            area[row][columbn] = ' ';
            area[row - 1][columbn] = '&';

            if (area[row - 1][columbn + 1] == ' ')
            {
                area[row][columbn + 1] = ' ';
                area[row - 1][columbn + 1] = '&';
                row--;

            }
        }
        

     
    }
}


void Battle_Size_2_Move()
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
                up_func_Battle_size_2(BoardPlayer);

                show_board(BoardPlayer, sizeBoard);
                break;
            case 77:
                right_func_Battle_size_2(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                break;
            case 75:
                left_func_Battle_size_2(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

                break;
            case 80:
                down_func_Battle_size_2(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

            default:
                break;
            }
            break;
        default:
            cout << "Other Symbol" << endl;
            break;

        case 13:
            check = false;
            break;
        }
    }

}

//-----------------------------------------BATTLE SIZE 3---------------------------------------------------------

void boatSpan_3(char** area)
{

    while (true)
    {
        int random = 1 + rand() % 15;
        int random_2 = 1 + rand() % 15;

        bool check_1 = area[random][random_2] == ' ' && area[random + 1][random_2] == ' ' && area[random - 1][random_2] == ' ' && area[random][random_2 - 1] == ' ' && area[random - 1][random_2 - 1] == ' ' && area[random + 1][random_2 - 1] == ' ';
        bool check_2 = area[random][random_2 + 1] == ' ' && area[random - 1][random_2 + 1] == ' ' && area[random + 1][random_2 + 1] == ' ';
        bool check_3 = area[random][random_2 + 2] == ' ' && area[random + 1][random_2 + 2] == ' ' && area[random - 1][random_2 + 2] == ' ' && area[random][random_2 + 3] == ' ' && area[random - 1][random_2 + 3] == ' ' && area[random + 1][random_2 + 3] == ' ';

        if (check_1 && check_2 && check_3) {
            area[random][random_2] = '&';
            area[random][random_2 + 1] = '&';
            area[random][random_2 + 2] = '&';
            row = random;
            columbn = random_2;
            break;
        }
    }

    show_board(BoardPlayer, sizeBoard);


}

void left_func_Battle_size_3(char** area)
{
    if (area[row][columbn - 1] == ' ')
    {
        bool check_arround_1 = area[row][columbn - 2] != '&' && area[row - 1][columbn - 2] != '&' && area[row + 1][columbn - 2] != '&';
        if (check_arround_1)
        {
            area[row][columbn] = ' ';
            area[row][columbn - 1] = '&';

            if (area[row][columbn] == ' ')
            {
                area[row][columbn + 1] = ' ';
                area[row][columbn] = '&';

                if (area[row][columbn + 1] == ' ')
                {
                    area[row][columbn + 2] = ' ';
                    area[row][columbn + 1] = '&';
                    columbn--;
                }
            }
        }
      

     
    }

}

void right_func_Battle_size_3(char** area)
{
    if (area[row][columbn + 3] == ' ')
    {
        bool check_arround_2 = area[row][columbn + 4] != '&' && area[row - 1][columbn + 4] != '&' && area[row + 1][columbn + 4] != '&';
        if (check_arround_2)
        {
            area[row][columbn + 2] = ' ';
            area[row][columbn + 3] = '&';

            if (area[row][columbn + 2] == ' ')
            {
                area[row][columbn + 1] = ' ';
                area[row][columbn + 2] = '&';

                if (area[row][columbn + 1] == ' ')
                {
                    area[row][columbn] = ' ';
                    area[row][columbn + 1] = '&';
                    columbn++;
                }
            }
        }
       
    }

}

void down_func_Battle_size_3(char** area)
{
    if (area[row + 1][columbn] == ' ' && area[row + 1][columbn + 1] == ' ' && area[row + 1][columbn + 2] == ' ')
    {
        bool check_arround_1 = area[row + 2][columbn + 1] != '&' && area[row + 2][columbn] != '&' && area[row + 2][columbn - 1] != '&';
        bool check_arround_2 = area[row + 2][columbn + 2] != '&' && area[row + 2][columbn + 1] != '&' && area[row + 2][columbn] != '&';
        bool check_arround_3 = area[row + 2][columbn + 3] != '&' && area[row + 2][columbn + 2] != '&' && area[row + 2][columbn + 1] != '&';

        if (check_arround_1 && check_arround_2 && check_arround_3)
        {
            if (area[row + 1][columbn] == ' ')
            {
                area[row][columbn] = ' ';
                area[row + 1][columbn] = '&';

                if (area[row + 1][columbn + 1] == ' ')
                {
                    area[row][columbn + 1] = ' ';
                    area[row + 1][columbn + 1] = '&';

                    if (area[row + 1][columbn + 2] == ' ')
                    {
                        area[row][columbn + 2] = ' ';
                        area[row + 1][columbn + 2] = '&';
                        row++;

                    }

                }

            }
        }
      
    }
  


}


void up_func_Battle_size_3(char** area)
{
    if (area[row - 1][columbn] == ' ' && area[row - 1][columbn + 1] == ' ' && area[row - 1][columbn + 2] == ' ')
    {
        bool check_arround_1 = area[row - 2][columbn + 1] != '&' && area[row - 2][columbn] != '&' && area[row - 2][columbn - 1] != '&';
        bool check_arround_2 = area[row - 2][columbn + 2] != '&' && area[row - 2][columbn + 1] != '&' && area[row - 2][columbn] != '&';
        bool check_arround_3 = area[row - 2][columbn + 3] != '&' && area[row - 2][columbn + 2] != '&' && area[row - 2][columbn + 1] != '&';
        if (check_arround_1 && check_arround_2 && check_arround_3)
        {
            if (area[row - 1][columbn] == ' ')
            {
                area[row][columbn] = ' ';
                area[row - 1][columbn] = '&';

                if (area[row - 1][columbn + 1] == ' ')
                {
                    area[row][columbn + 1] = ' ';
                    area[row - 1][columbn + 1] = '&';

                    if (area[row - 1][columbn + 2] == ' ')
                    {
                        area[row][columbn + 2] = ' ';
                        area[row - 1][columbn + 2] = '&';
                        row--;

                    }

                }


            }
        }
       
    }



}


void Battle_Size_3_Move()
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
                up_func_Battle_size_3(BoardPlayer);

                show_board(BoardPlayer, sizeBoard);
                break;
            case 77:
                right_func_Battle_size_3(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                break;
            case 75:
                left_func_Battle_size_3(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

                break;
            case 80:
                down_func_Battle_size_3(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

            default:
                break;
            }
            break;
        default:
            cout << "Other Symbol" << endl;
            break;

        case 13:
            check = false;
            break;
        }
    }

}

//-----------------------------------------BATTLE SIZE 4---------------------------------------------------------

void boatSpan_4(char** area)
{

    while (true)
    {
        int random = 1 + rand() % 15;
        int random_2 = 1 + rand() % 15;
        bool check_1 = area[random][random_2] == ' ' && area[random + 1][random_2] == ' ' && area[random - 1][random_2] == ' ' && area[random][random_2 - 1] == ' ' && area[random - 1][random_2 - 1] == ' ' && area[random + 1][random_2 - 1] == ' ';
        bool check_2 = area[random][random_2 + 1] == ' ' && area[random - 1][random_2 + 1] == ' ' && area[random + 1][random_2 + 1] == ' ';
        bool check_3 = area[random][random_2 + 2] == ' ' && area[random - 1][random_2 + 2] == ' ' && area[random + 1][random_2 + 2] == ' ';
        bool check_4 = area[random][random_2 + 3] == ' ' && area[random + 1][random_2 + 3] == ' ' && area[random - 1][random_2 + 3] == ' ' && area[random][random_2 + 4] == ' ' && area[random - 1][random_2 + 4] == ' ' && area[random + 1][random_2 + 4] == ' ';

        if (check_1 && check_2 && check_3 && check_4) {
            area[random][random_2] = '&';
            area[random][random_2 + 1] = '&';
            area[random][random_2 + 2] = '&';
            area[random][random_2 + 3] = '&';
            row = random;
            columbn = random_2;
            break;
        }
    }

    show_board(BoardPlayer, sizeBoard);


}

void left_func_Battle_size_4(char** area)
{
    if (area[row][columbn - 1] == ' ')
    {
        bool check_arround_1 = area[row][columbn - 2] != '&' && area[row - 1][columbn - 2] != '&' && area[row + 1][columbn - 2] != '&';
        if (check_arround_1)
        {
            area[row][columbn] = ' ';
            area[row][columbn - 1] = '&';

            if (area[row][columbn] == ' ')
            {
                area[row][columbn + 1] = ' ';
                area[row][columbn] = '&';
            }

            if (area[row][columbn + 1] == ' ')
            {
                area[row][columbn + 2] = ' ';
                area[row][columbn + 1] = '&';
            }

            if (area[row][columbn + 2] == ' ')
            {
                area[row][columbn + 3] = ' ';
                area[row][columbn + 2] = '&';
                columbn--;
            }
        }
       
    }
}

void right_func_Battle_size_4(char** area)
{
    if (area[row][columbn + 4] == ' ')
    {
        bool check_arround_2 = area[row][columbn + 5] != '&' && area[row - 1][columbn + 5] != '&' && area[row + 1][columbn + 5] != '&';
        if (check_arround_2)
        {
            area[row][columbn + 3] = ' ';
            area[row][columbn + 4] = '&';

            if (area[row][columbn + 3] == ' ')
            {
                area[row][columbn + 2] = ' ';
                area[row][columbn + 3] = '&';
            }

            if (area[row][columbn + 2] == ' ')
            {
                area[row][columbn + 1] = ' ';
                area[row][columbn + 2] = '&';
            }

            if (area[row][columbn + 1] == ' ')
            {
                area[row][columbn] = ' ';
                area[row][columbn + 1] = '&';
                columbn++;
            }
        }
       
    }
}

void down_func_Battle_size_4(char** area)
{
    if (area[row + 1][columbn] == ' ' && area[row + 1][columbn + 1] == ' ' && area[row + 1][columbn + 2] == ' ' && area[row + 1][columbn + 3] == ' ')
    {
        bool check_arround_1 = area[row + 2][columbn + 1] != '&' && area[row + 2][columbn] != '&' && area[row + 2][columbn - 1] != '&';
        bool check_arround_2 = area[row + 2][columbn + 2] != '&' && area[row + 2][columbn + 1] != '&' && area[row + 2][columbn] != '&';
        bool check_arround_3 = area[row + 2][columbn + 3] != '&' && area[row + 2][columbn + 2] != '&' && area[row + 2][columbn + 1] != '&';
        bool check_arround_4 = area[row + 2][columbn + 4] != '&' && area[row + 2][columbn + 3] != '&' && area[row + 2][columbn + 2] != '&';
        if (check_arround_1 && check_arround_2 && check_arround_3 && check_arround_4)
        {
            if (area[row + 1][columbn] == ' ')
            {
                area[row][columbn] = ' ';
                area[row + 1][columbn] = '&';

                if (area[row + 1][columbn + 1] == ' ')
                {
                    area[row][columbn + 1] = ' ';
                    area[row + 1][columbn + 1] = '&';

                }

                if (area[row + 1][columbn + 2] == ' ')
                {
                    area[row][columbn + 2] = ' ';
                    area[row + 1][columbn + 2] = '&';

                }

                if (area[row + 1][columbn + 3] == ' ')
                {
                    area[row][columbn + 3] = ' ';
                    area[row + 1][columbn + 3] = '&';
                    row++;

                }
            }
        }
        
    }
}


void up_func_Battle_size_4(char** area)
{
    if (area[row - 1][columbn] == ' ' && area[row - 1][columbn + 1] == ' ' && area[row - 1][columbn + 2] == ' ' && area[row - 1][columbn + 3] == ' ')
    {

        bool check_arround_1 = area[row - 2][columbn + 1] != '&' && area[row - 2][columbn] != '&' && area[row - 2][columbn - 1] != '&';
        bool check_arround_2 = area[row - 2][columbn + 2] != '&' && area[row - 2][columbn + 1] != '&' && area[row - 2][columbn] != '&';
        bool check_arround_3 = area[row - 2][columbn + 3] != '&' && area[row - 2][columbn + 2] != '&' && area[row - 2][columbn + 1] != '&';
        bool check_arround_4 = area[row - 2][columbn + 4] != '&' && area[row - 2][columbn + 4] != '&' && area[row - 2][columbn + 4] != '&';
        if (check_arround_1 && check_arround_2 && check_arround_3 && check_arround_4)
        {
            if (area[row - 1][columbn] == ' ')
            {
                area[row][columbn] = ' ';
                area[row - 1][columbn] = '&';

                if (area[row - 1][columbn + 1] == ' ')
                {
                    area[row][columbn + 1] = ' ';
                    area[row - 1][columbn + 1] = '&';

                }
                if (area[row - 1][columbn + 2] == ' ')
                {
                    area[row][columbn + 2] = ' ';
                    area[row - 1][columbn + 2] = '&';

                }

                if (area[row - 1][columbn + 3] == ' ')
                {
                    area[row][columbn + 3] = ' ';
                    area[row - 1][columbn + 3] = '&';
                    row--;

                }
            }
        }
      
    }
}


void Battle_Size_4_Move()
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
                up_func_Battle_size_4(BoardPlayer);

                show_board(BoardPlayer, sizeBoard);
                break;
            case 77:
                right_func_Battle_size_4(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                break;
            case 75:
                left_func_Battle_size_4(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

                break;
            case 80:
                down_func_Battle_size_4(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

            default:
                break;
            }
            break;
        default:
            cout << "Other Symbol" << endl;
            break;

       

        case 13:
            check = false;
            break;
        }
    }

}

//----------------------vertical or horizontal-----------------------------------------

bool choice_vertical = false;
bool choice_horizontal = false;
bool choice_Back_Horizontal_vertical_Menu = false;
void AskToPlayer_Vertical_Or_Horizontal()
{

    cout << endl;
    int position = 1;
    int keyPressed = 0;

    while (keyPressed != 13)
    {

        system("cls");
        show_board(BoardPlayer, sizeBoard);

        SetConsoleTextAttribute(console, 11);
        cout << "\n\n\n\n\n\n";
        cout << "PLEASE,CHOICE VERTICAL OR HORIZONTAL" << endl;
        arrowHere_2(1, position);
        cout << "VERTICAL\n";
        arrowHere_2(2, position);
        cout << "HORIZONTAL \n";
        arrowHere_2(3, position);
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
        choice_vertical = true;
        break;
    case 2:
        system("cls");
        SetConsoleTextAttribute(console, 7);
        choice_horizontal = true;
        break;
    case 3:
        system("cls");
        SetConsoleTextAttribute(console, 7);
        choice_Back_Horizontal_vertical_Menu = true;
        break;
    }
}
