#pragma once
//-----------------------------------------BATTLE SIZE 2---------------------------------------------------------
void boatSpan_2_vertical(char** area)
{

    while (true)
    {
        int random = 1 + rand() % 15;
        int random_2 = 1 + rand() % 15;
        if (area[random][random_2] == ' ' && area[random + 1][random_2] == ' ') {
            area[random][random_2] = '&';
            area[random + 1][random_2] = '&';
            row = random;
            columbn = random_2;
            break;
        }
    }

    show_board(BoardPlayer, sizeBoard);

}

void left_func_Battle_size_2_vertical(char** area)
{
    if (area[row][columbn - 1] == ' ' && area[row + 1][columbn - 1] == ' ')
    {
        if (area[row][columbn - 1] == ' ')
        {
            area[row][columbn] = ' ';
            area[row][columbn - 1] = '&';


            if (area[row + 1][columbn - 1] == ' ')
            {
                area[row + 1][columbn] = ' ';
                area[row + 1][columbn - 1] = '&';
                columbn--;
            }
        }
    }
}

void right_func_Battle_size_2_vertical(char** area)
{
    if (area[row + 1][columbn + 1] == ' ' && area[row][columbn + 1] == ' ')
    {
        if (area[row + 1][columbn + 1] == ' ')
        {
            area[row + 1][columbn] = ' ';
            area[row + 1][columbn + 1] = '&';

            if (area[row][columbn + 1] == ' ')
            {
                area[row][columbn] = ' ';
                area[row][columbn + 1] = '&';
                columbn++;
            }
        }
    }
}

void down_func_Battle_size_2_vertical(char** area)
{
    if (area[row + 1][columbn] == '&')
    {
        area[row][columbn] = ' ';
        area[row + 1][columbn] = '&';

        if (area[row + 2][columbn] == ' ')
        {
            area[row + 2][columbn] = ' ';
            area[row + 2][columbn] = '&';
            row++;

        }

    }
}

void up_func_Battle_size_2_vertical(char** area)
{
    if (area[row - 1][columbn] == ' ')
    {
        area[row][columbn] = ' ';
        area[row - 1][columbn] = '&';

        if (area[row][columbn] == ' ')
        {
            area[row + 1][columbn] = ' ';
            area[row][columbn] = '&';
            row--;

        }
    }
}


void Battle_Size_2_Move_vertical()
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
                up_func_Battle_size_2_vertical(BoardPlayer);

                show_board(BoardPlayer, sizeBoard);
                break;
            case 77:
                right_func_Battle_size_2_vertical(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                break;
            case 75:
                left_func_Battle_size_2_vertical(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

                break;
            case 80:
                down_func_Battle_size_2_vertical(BoardPlayer);
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

////-----------------------------------------BATTLE SIZE 3---------------------------------------------------------

void boatSpan_3_vertical(char** area)
{
    while (true)
    {
        int random = 1 + rand() % 13;
        int random_2 = 1 + rand() % 13;
        if (area[random][random_2] == ' ' && area[random + 1][random_2] == ' ' && area[random + 2][random_2] == ' ') {
            area[random][random_2] = '&';
            area[random + 1][random_2] = '&';
            area[random + 2][random_2] = '&';
            row = random;
            columbn = random_2;
            break;
        }
    }

    show_board(BoardPlayer, sizeBoard);
}

void left_func_Battle_size_3_vertical(char** area)
{
    if (area[row][columbn - 1] == ' ' && area[row + 1][columbn - 1] == ' ' && area[row + 2][columbn - 1] == ' ')
    {
        if (area[row][columbn - 1] == ' ')
        {
            area[row][columbn] = ' ';
            area[row][columbn - 1] = '&';

            if (area[row + 1][columbn - 1] == ' ')
            {
                area[row + 1][columbn] = ' ';
                area[row + 1][columbn - 1] = '&';
            }

            if (area[row + 2][columbn - 1] == ' ')
            {
                area[row + 2][columbn] = ' ';
                area[row + 2][columbn - 1] = '&';
                columbn--;
            }
        }
    }
}

void right_func_Battle_size_3_vertical(char** area)
{
    if (area[row + 2][columbn + 1] == ' ' && area[row + 1][columbn + 1] == ' ' && area[row][columbn + 1] == ' ')
    {
        if (area[row + 2][columbn + 1] == ' ')
        {
            area[row + 2][columbn] = ' ';
            area[row + 2][columbn + 1] = '&';

            if (area[row + 1][columbn + 1] == ' ')
            {
                area[row + 1][columbn] = ' ';
                area[row + 1][columbn + 1] = '&';
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

void down_func_Battle_size_3_vertical(char** area)
{
    if (area[row + 3][columbn] == ' ')
    {
        area[row + 2][columbn] = ' ';
        area[row + 3][columbn] = '&';

        if (area[row + 2][columbn] == ' ')
        {
            area[row + 1][columbn] = ' ';
            area[row + 2][columbn] = '&';

            if (area[row + 1][columbn] == ' ')
            {
                area[row][columbn] = ' ';
                area[row + 1][columbn] = '&';
                row++;

            }
        }
    }
}

void up_func_Battle_size_3_vertical(char** area)
{

    if (area[row - 1][columbn] == ' ')
    {
        area[row][columbn] = ' ';
        area[row - 1][columbn] = '&';

        if (area[row][columbn] == ' ')
        {
            area[row + 1][columbn] = ' ';
            area[row][columbn] = '&';

            if (area[row + 1][columbn] == ' ')
            {
                area[row + 2][columbn] = ' ';
                area[row + 1][columbn] = '&';
                row--;

            }
        }
    }
}

void Battle_Size_3_Move_vertical()
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
                up_func_Battle_size_3_vertical(BoardPlayer);

                show_board(BoardPlayer, sizeBoard);
                break;
            case 77:
                right_func_Battle_size_3_vertical(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                break;
            case 75:
                left_func_Battle_size_3_vertical(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

                break;
            case 80:
                down_func_Battle_size_3_vertical(BoardPlayer);
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
////-----------------------------------------BATTLE SIZE 4---------------------------------------------------------

void boatSpan_4_vertical(char** area)
{
    while (true)
    {
        int random = 1 + rand() % 12;
        int random_2 = 1 + rand() % 12;
        if (area[random][random_2] == ' ' && area[random + 1][random_2] == ' ' && area[random + 2][random_2] == ' ' && area[random + 3][random_2] == ' ' ) {
            area[random][random_2] = '&';
            area[random + 1][random_2] = '&';
            area[random + 2][random_2] = '&';
            area[random + 3][random_2] = '&';
            row = random;
            columbn = random_2;
            break;
        }
    }

    show_board(BoardPlayer, sizeBoard);
}

void left_func_Battle_size_4_vertical(char** area)
{
    if (area[row][columbn - 1] == ' ' && area[row + 1][columbn - 1] == ' ' && area[row + 2][columbn - 1] == ' ' && area[row + 3][columbn - 1] == ' ')
    {
        if (area[row][columbn - 1] == ' ')
        {
            area[row][columbn] = ' ';
            area[row][columbn - 1] = '&';

            if (area[row + 1][columbn - 1] == ' ')
            {
                area[row + 1][columbn] = ' ';
                area[row + 1][columbn - 1] = '&';
            }

            if (area[row + 2][columbn - 1] == ' ')
            {
                area[row + 2][columbn] = ' ';
                area[row + 2][columbn - 1] = '&';
            }

            if (area[row + 3][columbn - 1] == ' ')
            {
                area[row + 3][columbn] = ' ';
                area[row + 3][columbn - 1] = '&';
                columbn--;
            }

        }
    }
    
}

void right_func_Battle_size_4_vertical(char** area)
{
    if (area[row][columbn + 1] == ' ' && area[row + 1][columbn + 1] == ' ' && area[row + 2][columbn + 1] == ' ' && area[row + 3][columbn + 1] == ' ')
    {
        if (area[row][columbn + 1] == ' ')
        {
            area[row][columbn] = ' ';
            area[row][columbn + 1] = '&';

            if (area[row + 1][columbn + 1] == ' ')
            {
                area[row + 1][columbn] = ' ';
                area[row + 1][columbn + 1] = '&';
            }

            if (area[row + 2][columbn + 1] == ' ')
            {
                area[row + 2][columbn] = ' ';
                area[row + 2][columbn + 1] = '&';
            }

            if (area[row + 3][columbn + 1] == ' ')
            {
                area[row + 3][columbn] = ' ';
                area[row + 3][columbn + 1] = '&';
                columbn++;
            }
        }
    }
   
}

void down_func_Battle_size_4_vertical(char** area)
{
    if (area[row + 4][columbn] == ' ')
    {
        area[row + 3][columbn] = ' ';
        area[row + 4][columbn] = '&';

        if (area[row + 3][columbn] == ' ')
        {
            area[row + 2][columbn] = ' ';
            area[row + 3][columbn] = '&';

            if (area[row + 2][columbn] == ' ')
            {
                area[row + 1][columbn] = ' ';
                area[row + 2][columbn] = '&';

                if (area[row + 1][columbn] == ' ')
                {
                    area[row][columbn] = ' ';
                    area[row + 1][columbn] = '&';
                    row++;

                }

            }

        }
      

    }
}

void up_func_Battle_size_4_vertical(char** area)
{
    if (area[row - 1][columbn] == ' ')
    {
        area[row][columbn] = ' ';
        area[row - 1][columbn] = '&';

        if (area[row][columbn] == ' ')
        {
            area[row + 1][columbn] = ' ';
            area[row][columbn] = '&';

            if (area[row + 1][columbn] == ' ')
            {
                area[row + 2][columbn] = ' ';
                area[row + 1][columbn] = '&';

                if (area[row + 2][columbn] == ' ')
                {
                    area[row + 3][columbn] = ' ';
                    area[row + 2][columbn] = '&';
                    row--;

                }

            }

        }
    }
}


void Battle_Size_4_Move_vertical()
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
                up_func_Battle_size_4_vertical(BoardPlayer);

                show_board(BoardPlayer, sizeBoard);
                break;
            case 77:
                right_func_Battle_size_4_vertical(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);
                break;
            case 75:
                left_func_Battle_size_4_vertical(BoardPlayer);
                show_board(BoardPlayer, sizeBoard);

                break;
            case 80:
                down_func_Battle_size_4_vertical(BoardPlayer);
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