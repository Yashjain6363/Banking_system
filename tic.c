#include <stdio.h>
#include <stdlib.h>
char currentplayer = 'x';
char board[3][3];
void initializeboard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void printboard()
{
    for (int i = 0; i < 3; i++)
    {
        printf("%c | %c| %c\n", board[i][0], board[i][1], board[i][2]);
        if (i != 2)
        {
            printf("--|--|--\n");
        }
    }
}
int checkwinner()
{
    for (int i = 0; i < 3; i++)
    {

        if (board[i][0] == currentplayer && board[i][1] == currentplayer && board[i][2] == currentplayer)
        {
            return 1;
        }
        if (board[0][i] == currentplayer && board[1][i] == currentplayer && board[2][i] == currentplayer)
        {
            return 1;
        }
    }
    if (board[0][0] == currentplayer && board[1][1] == currentplayer && board[2][2] == currentplayer)
    {
        return 1;
    }
    if (board[0][2] == currentplayer && board[1][1] == currentplayer && board[2][0] == currentplayer)
    {
        return 1;
    }
    return 0;
}
int isDraw()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}
void switchplayer()
{
    if (currentplayer == 'x')
    {
        currentplayer = 'o';
    }
    else
    {
        currentplayer = 'x';
    }
}
int main()
{
    int row, col;
    initializeboard();

    printf("-----TIC TAC TO-----\n");
    printboard();
    while (1)
    {
        printf("player %c Enter your move row(1-3)column(1-3)\n", currentplayer);
        scanf("%d %d", &row, &col);
        row--;
        col--;
        if (row < 0 || col > 2 || row > 2 || col < 0 || board[row][col] != ' ')
        {
            printf("Invalid input please try again player %c\n", currentplayer);
            continue;
        }
        board[row][col] = currentplayer;
        system("cls");
        printboard();

        if (checkwinner())
        {
            printf("congratulations player %c won the game", currentplayer);
            break;
        }
        if (isDraw())
        {
            printf("The Game is draw");
            break;
        }
        switchplayer();
    }
    return 0;
}
