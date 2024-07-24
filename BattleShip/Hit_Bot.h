#pragma once


void print_bot_boardd(char** board, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\t\t\t\t\t\t\t";

        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == 'X')
            {
                check_ = false;
                SetConsoleTextAttribute(console, 12);
                cout << board[i][j] << " ";
                SetConsoleTextAttribute(console, 7);


            }
            else if (board[i][j] == 'V')
            {
                check_ = true;
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




bool check_Player_board = true;



void Show_Player_board(char** board, int size)
{
    system("cls");
    SetConsoleTextAttribute(console, 7);



    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == 'X')
            {
                //check_Player_board = false;
                SetConsoleTextAttribute(console, 12);
                cout << board[i][j] << " ";
                SetConsoleTextAttribute(console, 7);




            }
            else if (board[i][j] == 'V')
            {
                //check_Player_board = true;
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
    gotoxy(0, 0);
    print_bot_boardd(FakeBoardBot, sizeBoard);
   






}



int row_bot;
int columbn_bot;
int count_player_Battle = 0;
bool check_Seccond_hit = false;
int temp_Row;
int temp_Columbn;

void Hit_Bot_to_Player(char** board)
{
  
    while (true)
    {
        int random = 1 + rand() % 14;
        int random_2 = 1 + rand() % 14;
        row_bot = random;
        columbn_bot = random_2;
        
        if (board[row_bot][columbn_bot] == 'X' || board[row_bot][columbn_bot] == 'V')
        {
            continue;
        }
        else
        {
            if (board[row_bot][columbn_bot] == '&' )
            {
                count_player_Battle++;

                temp_Row = row_bot;
                temp_Columbn = columbn_bot;

                check_Player_board = true;
                check_Seccond_hit = true;


                score_Bot++;
                BoardPlayer[row_bot][columbn_bot] = 'V';
                break;
            }



            else if (board[row_bot][columbn_bot] == ' ')
            {
                check_Player_board = false;

                BoardPlayer[row_bot][columbn_bot] = 'X';

                break;

            }
        }
       
    }
  
    Show_Player_board(BoardPlayer, sizeBoard);
    
}
int i = 1;
bool checkkk1 = true;
bool checkkk2 = true;
void Clever_Bot_Hit(char** board)


{

    while (true)
    {
        if (i - temp_Columbn < 0)
        {
            checkkk1 = false;
        }
        if (i - temp_Row < 0)
        {
            checkkk2 = false;
        }


        if (board[temp_Row + i][temp_Columbn] == '&' && board[temp_Row + i][temp_Columbn] != 'Ü' && board[temp_Row + i][temp_Columbn] != 'X' && board[temp_Row + i][temp_Columbn] != 'V' /*&& board[temp_Row ][temp_Columbn] == 'V'*/)
        {
            check_Player_board = true;
            check_Seccond_hit = true;


            score_Bot++;
            BoardPlayer[row_bot + i][columbn_bot] = 'V';
            show_Bot_Board(FakeBoardBot, sizeBoard);
            i++;
            if (i > 4)
            {
                i = 1;
            }
            break;
        }

        else if (board[temp_Row][temp_Columbn + i] == '&' && board[temp_Row][temp_Columbn + i] != 'Ü' && board[temp_Row][temp_Columbn + i] != 'X' && board[temp_Row][temp_Columbn + i] != 'V' /*&& board[temp_Row][temp_Columbn - 1] == 'V'*/)
        {
            check_Player_board = true;
            check_Seccond_hit = true;


            score_Bot++;
            BoardPlayer[row_bot][columbn_bot + i] = 'V';
            show_Bot_Board(FakeBoardBot, sizeBoard);
            i++;
            if (i > 4)
            {
                i = 1;
            }
            break;
        }

        else if (checkkk1)
        {
            if (board[temp_Row][temp_Columbn - i] == '&' && board[temp_Row][temp_Columbn - i] != 'Ü' && board[temp_Row][temp_Columbn - i] != 'X' && board[temp_Row][temp_Columbn - i] != 'V' /*&& board[temp_Row][temp_Columbn + 1] == 'V'*/)
            {
                check_Player_board = true;
                check_Seccond_hit = true;


                score_Bot++;
                BoardPlayer[row_bot][columbn_bot - i] = 'V';
                show_Bot_Board(FakeBoardBot, sizeBoard);
                i++;
                if (i > 4)
                {
                    i = 1;
                }
                break;
            }
        }
        
        else if (checkkk2)
        {
            if (board[temp_Row - i][temp_Columbn] == '&' && board[temp_Row - i][temp_Columbn] != 'Ü' && board[temp_Row - i][temp_Columbn] != 'X' && board[temp_Row - i][temp_Columbn] != 'V' /*&& board[temp_Row + 1][temp_Columbn] == 'V'*/)
            {
                check_Player_board = true;
                check_Seccond_hit = true;


                score_Bot++;
                BoardPlayer[row_bot - i][columbn_bot] = 'V';
                show_Bot_Board(FakeBoardBot, sizeBoard);
                i++;
                if (i > 4)
                {
                    i = 1;
                }
                break;
            }
        }
       

        if (checkkk1 && checkkk2)
        {
            if (BoardPlayer[row_bot + i][columbn_bot] == ' ' || BoardPlayer[row_bot][columbn_bot + i] == ' ' || BoardPlayer[row_bot][columbn_bot - i] == ' ' || BoardPlayer[row_bot - i][columbn_bot] == ' ')
            {
                check_Player_board = false;
                check_Seccond_hit = false;
                if (BoardPlayer[row_bot + i][columbn_bot] == ' ')
                {
                    BoardPlayer[row_bot + i][columbn_bot] = 'X';

                }

                else if (BoardPlayer[row_bot][columbn_bot + i] == ' ')
                {
                    BoardPlayer[row_bot][columbn_bot + i] = 'X';
                }
                else if (BoardPlayer[row_bot][columbn_bot - i] == ' ')
                {
                    BoardPlayer[row_bot][columbn_bot - i] = 'X';
                }
                else if (BoardPlayer[row_bot - i][columbn_bot] == ' ')
                {
                    BoardPlayer[row_bot - i][columbn_bot] = 'X';
                }
                show_Bot_Board(FakeBoardBot, sizeBoard);
                i = 1;

                break;
            }
        }

        else 
        {
            if (BoardPlayer[row_bot + i][columbn_bot] == ' ' || BoardPlayer[row_bot][columbn_bot + i] == ' ' )
            {
                check_Player_board = false;
                check_Seccond_hit = false;
                if (BoardPlayer[row_bot + i][columbn_bot] == ' ')
                {
                    BoardPlayer[row_bot + i][columbn_bot] = 'X';

                }

                else if (BoardPlayer[row_bot][columbn_bot + i] == ' ')
                {
                    BoardPlayer[row_bot][columbn_bot + i] = 'X';
                }
                
                show_Bot_Board(FakeBoardBot, sizeBoard);
                i = 1;

                break;
            }
            else
            {
                check_Player_board = false;
                check_Seccond_hit = false;
                i = 1;

                break;

            }
        }
        
        
      
       
       

        }
        

}

    
    

