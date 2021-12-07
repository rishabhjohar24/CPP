#include <bits/stdc++.h>
using namespace std;
int dx[] = {1, 0, -1, 0}; // D R U L
int dy[] = {0, 1, 0, -1};
bool isSafe(int x, int y, int n, vector<vector<int>> arr, vector<vector<int>> visited)
{
  if (x < 0 || y < 0 || x >= n || y >= n || !arr[x][y] || visited[x][y])
  {
    return false;
  }
  return true;
}
char ass(int i)
{
  switch (i)
  {
  case 0:
    return 'D';
  case 1:
    return 'R';
  case 2:
    return 'U';
  }
  return 'L';
}
void maze(vector<vector<int>> arr, vector<vector<int>> &visited, int x, int y, int n, string s, set<string> &st)
{
  if (x == n - 1 && y == n - 1)
  {
    st.insert(s);
    return;
  }
  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (isSafe(nx, ny, n, arr, visited))
    {
      visited[nx][ny] = 1;
      s += ass(i);
      maze(arr, visited, nx, ny, n, s, st);
      s.pop_back();
      visited[nx][ny] = 0;
    }
  }
  return;
}
int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n, 0)), visited(n, vector<int>(n, 0));
  set<string> s;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  visited[0][0] = 1;
  maze(arr, visited, 0, 0, n, "", s);
  for (auto i : s)
  {
    cout << i << " ";
  }
  return 0;
}