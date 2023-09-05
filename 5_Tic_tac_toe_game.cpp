#include <iostream>
#include <ctime>

using std::cout;
using std::cin;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player);
bool checkTie(char *spaces, char player, char computer);
bool gameOver(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWinner(spaces, player) == true)
        {
            cout<<"CONGRATULATIONS, you win!!!";
            running = false;
        }
        else
        {
            running = gameOver(spaces);

            if (running)
            {
                computerMove(spaces, computer);
                drawBoard(spaces);
                
                if (checkWinner(spaces, computer) == true)
                {
                    cout<<"You loose!!!";
                    running = false;
                }
            }
        }
    }

    return 0;
}


void drawBoard(char *spaces)
{
    cout<<"\n";
    cout<<"     |     |     \n";
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  \n";
    cout<<"     |     |     \n";
}

void playerMove(char *spaces, char player)
{
    int number;
    bool running = true;

    do
    {
        cout<<"Enter position (1-9): ";
        cin>>number;
        number--;

        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
        else 
        {
            cout<<"Position is already taken...\n";
        }
    } while (!number > 0 || !number < 8);    
}

void computerMove(char *spaces, char computer)
{    
    srand(time(NULL));
    bool gameCompleted = false;

    do
    {
        int position = rand() % 9;

        if (spaces[position] == ' ')
        {
            spaces[position] = computer;
            gameCompleted = true;
        }  
    } while (!gameCompleted);    
}

bool checkWinner(char *spaces, char player)
{
    if (spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[0] == player)
    {
        return true;
    }
    else if (spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] == player)
    {
        return true;
    }
    else if (spaces[6] == spaces[7] && spaces[7] == spaces[8] && spaces[6] == player)
    {
        return true;
    }
    else if (spaces[0] == spaces[3] && spaces[3] == spaces[6] && spaces[0] == player)
    {
        return true;
    }
    else if (spaces[1] == spaces[4] && spaces[4] == spaces[7] && spaces[1] == player)
    {
        return true;
    }
    else if (spaces[2] == spaces[5] && spaces[5] == spaces[8] && spaces[2] == player)
    {
        return true;
    }
    else if (spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] == player)
    {
        return true;
    }
    else if (spaces[2] == spaces[4] && spaces[4] == spaces[6] && spaces[2] == player)
    {
        return true;
    }

    return false;
}

bool checkTie(char *spaces, char player, char computer)
{
    if ((spaces[0] == spaces[1] && spaces[1] == spaces[2])
        || (spaces[3] == spaces[4] && spaces[4] == spaces[5])
        || (spaces[6] == spaces[7] && spaces[7] == spaces[8])
        || (spaces[0] == spaces[3] && spaces[3] == spaces[6])
        || (spaces[1] == spaces[4] && spaces[4] == spaces[7])
        || (spaces[2] == spaces[5] && spaces[5] == spaces[8])
        || (spaces[0] == spaces[4] && spaces[4] == spaces[8])
        || (spaces[2] == spaces[4] && spaces[4] == spaces[6]))
    {
        
    }

    return 0;
}

bool gameOver(char *spaces)
{
    for (int i=0; i<9; i++)
    {
        if (spaces[i] == ' ')
        {
            return true;
        }
    }

    cout<<"Game over, no more spaces to fill.\n";
    return false;
}