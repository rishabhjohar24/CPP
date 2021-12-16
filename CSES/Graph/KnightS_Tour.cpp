#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> arr(9, vector<int>(9, 0));
int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] = {2, -2, 1, -1, 2, -2, 1, -1};
bool isValid(int x, int y)
{
  return (x >= 1 && y >= 1 && x < 9 && y < 9 && !arr[x][y]);
}
bool DFS(int x, int y, int cnt)
{
  if (cnt == 64)
  {
    return 1;
  }
  arr[x][y] = cnt;
  for (int i = 0; i < 8; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (isValid(nx, ny))
    {
      if (DFS(nx, ny, cnt + 1))
      {
        return true;
      }
      else
      {
        arr[nx][ny] = 0;
      }
    }
  }
  return false;
}
int main()
{
  int n, m;
  cin >> n >> m;
  DFS(n, m, 1);
  for (int i = 1; i < 9; i++)
  {
    for (int j = 1; j < 9; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}