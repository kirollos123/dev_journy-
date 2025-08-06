#include <iostream>
#include <string>
using namespace std;

void displayBoard(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << (j < 2 ? " | " : "");
        }
        cout << endl;
        if (i < 2)
            cout << "--------------" << endl;
    }
}

void display(string message)
{
    cout << message << endl;
}

void initializeBoard(char board[3][3])
{
    int count = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '0' + count++;
        }
    }
}

bool makeMove(char (&board)[3][3], int position, char player)
{
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;
    if (position < 1 || position > 9 || board[row][col] == 'X' || board[row][col] == 'O')
    {
        return false;
    }
    board[row][col] = player;
    return true;
}

bool checkWin(char board[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }
    return false;
}

bool checkDraw(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    char board[3][3];
    char currentPlayer = 'X';
    char playAgain;

    do
    {
        initializeBoard(board);
        bool gameEnded = false;

        while (!gameEnded)
        {
            displayBoard(board);
            display(currentPlayer == 'X' ? "X's turn:" : "O's turn:");

            int position;
            cout << "Enter position (1-9): ";
            cin >> position;

            if (cin.fail() || !makeMove(board, position, currentPlayer))
            {
                cin.clear();
                cin.ignore(1000, '\n');
                display("Invalid move, try again.");
                continue;
            }

            if (checkWin(board, currentPlayer))
            {
                displayBoard(board);
                display(string(1, currentPlayer) + " wins!");
                gameEnded = true;
            }
            else if (checkDraw(board))
            {
                displayBoard(board);
                display("It's a draw!");
                gameEnded = true;
            }
            else
            {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }

        display("Do you want to play again? (y/n): ");
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    display("Thanks for playing!");
    return 0;
}
