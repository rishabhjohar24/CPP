#include <bits/stdc++.h>
using namespace std;
vector<int> color(101, 0);
vector<vector<int>> arr(101, vector<int>(101, 0));
bool isSafe(int node, int col, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[node][i] && color[i] == col)
    {
      return false;
    }
  }
  return true;
}
bool colouring(int node, int m, int n)
{
  if (node == n)
  {
    return true;
  }
  for (int i = 1; i <= m; i++)
  {
    if (isSafe(node, i, n))
    {
      color[node] = i;
      if (colouring(node + 1, m, n))
      {
        return true;
      }
      color[node] = 0;
    }
  }
  return false;
}
int main()
{
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << colouring(0, m, n);
  return 0;
}