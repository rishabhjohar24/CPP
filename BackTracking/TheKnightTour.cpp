#include <iostream>
using namespace std;
#define N 8
int solveKTUtil(int x, int y, int movei, int sol[N][N], int xmove[], int ymove[]);
int isSafe(int x, int y, int sol[N][N])
{
    return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}
void print(int sol[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}
int solveKT()
{
    int sol[N][N];
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
        {
            sol[x][y] = -1;
        }
    }
    int xmove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int ymove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    sol[0][0] = 0;

    if (solveKTUtil(2, 1, 1, sol, xmove, ymove) == 0)
    {
        cout << "Solution does not exist";
        return 0;
    }
    else
    {
        print(sol);
    }
    return 1;
}
int solveKTUtil(int x, int y, int movei, int sol[N][N], int xmove[N], int ymove[N])
{
    int k, x_move, y_move;
    if (movei == N * N)
    {
        return 1;
    }
    for (k = 0; k < 8; k++)
    {
        x_move = x + xmove[k];
        y_move = y + ymove[k];
        if (isSafe(x_move, y_move, sol))
        {
            sol[x_move][y_move] = movei;
            if (solveKTUtil(x_move, y_move, movei + 1, sol, xmove, ymove) == 1)
            {
                return 1;
            }
            else
            {
                sol[x_move][y_move] = -1;
            }
        }
    }
    return 0;
}
int main()
{
    solveKT();
    return 0;
}