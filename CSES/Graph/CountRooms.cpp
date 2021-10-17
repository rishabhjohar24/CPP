#include <bits/stdc++.h>
#define vv(l) vector<vector<l>>
#define v(l) vector<l>
using namespace std;
bool isValid(int x, int y, int n, int m, vv(char) grid, vv(bool) visit)
{
    if (x < 0 || y < 0 || x >= n || y >= m || grid[x][y] == '#' || visit[x][y])
    {
        return false;
    }
    return true;
}
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
void DFS(int n, int m, int x, int y, vv(char) grid, vv(bool) & visit)
{
    visit[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isValid(nx, ny, n, m, grid, visit))
        {
            DFS(n, m, nx, ny, grid, visit);
        }
    }
}
int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    vv(char) grid(n, v(char)(m));
    vv(bool) visit(n, v(bool)(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visit[i][j] && grid[i][j] == '.')
            {
                DFS(n, m, i, j, grid, visit);
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}