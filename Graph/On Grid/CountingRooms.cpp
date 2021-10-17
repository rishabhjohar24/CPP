#include <iostream>
#include <cstring>
using namespace std;
char vec[1001][1001] = {{0}};
bool visit[1001][1001] = {{false}};
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
bool isValid(int n, int m, int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m || visit[x][y] || vec[x][y] == '#')
    {
        return false;
    }
    return true;
}
void countRooms(int n, int m, int x, int y)
{
    visit[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        if (isValid(n, m, x + dx[i], y + dy[i]))
        {
            countRooms(n, m, x + dx[i], y + dy[i]);
        }
    }
}
int main()
{
    memset(vec, 0, sizeof(vec));
    memset(visit, false, sizeof(visit));
    int n, m, rooms = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> vec[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!visit[i][j] && vec[i][j] == '.')
            {
                rooms++;
                countRooms(n, m, i, j);
            }
        }
    }
    cout << rooms;
    return 0;
}