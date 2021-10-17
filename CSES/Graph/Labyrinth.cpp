#include <bits/stdc++.h>
#define vv(l) vector<vector<l>>
#define v(l) vector<l>
using namespace std;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
bool visit[1001][1001];
char grid[1001][1001];
v(int) dir;
int dist[1001][1001], step[1001][1001];
bool isValid(int n, int m, int x, int y)
{
    if (x < 0 || y < 0 || x >= n || y >= m || visit[x][y] || grid[x][y] == '#')
    {
        return false;
    }
    return true;
}
int main()
{
    int n, m, sx, sy, ex, ey;
    cin >> n >> m;
    string str = "URDL";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                sx = i;
                sy = j;
            }
            if (grid[i][j] == 'B')
            {
                ex = i;
                ey = j;
            }
        }
    }
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visit[sx][sy] = true;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (isValid(n, m, nx, ny))
            {
                visit[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                step[nx][ny] = i;
                q.push({nx, ny});
            }
        }
    }
    if (dist[ex][ey])
    {
        cout << "YES\n";
        cout << dist[ex][ey] << "\n";
        pair<int, int> end, begin;
        end = make_pair(ex, ey);
        begin = make_pair(sx, sy);
        while (end != begin)
        {
            int p = step[end.first][end.second];
            dir.push_back(p);
            end = make_pair(end.first - dx[p], end.second - dy[p]);
        }
        reverse(dir.begin(), dir.end());
        for (auto i : dir)
        {
            cout << str[i];
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}