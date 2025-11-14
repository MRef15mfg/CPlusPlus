#include <iostream>
#include <iomanip>
using namespace std;

const int N = 6;

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isSafe(int x, int y, int board[N][N])
{
    if (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool solveKnightTourUtil(int board[N][N], int x, int y, int movei)
{
    if (movei == N * N)
    {
        return true;
    }

    for (int k = 0; k < 8; k++)
    {
        int nextX = x + dx[k];
        int nextY = y + dy[k];

        if (isSafe(nextX, nextY, board))
        {
            board[nextX][nextY] = movei;
            if (solveKnightTourUtil(board, nextX, nextY, movei + 1))
            {
                return true;
            }
            else
            {
                board[nextX][nextY] = -1;
            }
        }
    }

    return false;
}

void solveKnightTour(int startX, int startY)
{
    int board[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = -1;
        }
    }

    board[startX][startY] = 0;

    if (solveKnightTourUtil(board, startX, startY, 1))
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << setw(2) << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Розв'язок не знайдено.\n";
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    solveKnightTour(x, y);
    return 0;
}
