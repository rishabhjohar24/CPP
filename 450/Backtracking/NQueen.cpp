#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> ans;
ofstream out("output.txt");
bool isSafe(vector<vector<int>> arr, int row, int col, int n)
{
  for (int i = 0; i < col; i++)
  {
    if (arr[row][i])
    {
      return false;
    }
  }
  for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
  {
    if (arr[i][j])
    {
      return false;
    }
  }
  for (int i = row, j = col; i < n && j < n; i++, j++)
  {
    if (arr[i][j])
    {
      return false;
    }
  }
  return true;
}
bool N_Queen(int n, vector<vector<int>> &arr, int col)
{
  if (col == n)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        out << arr[i][j] << " ";
      }
      out << "\n";
    }
    return true;
  }
  for (int i = 0; i < n; i++)
  {
    if (isSafe(arr, i, col, n))
    {
      arr[i][col] = 1;
      ans.push_back({i, col});
      if (N_Queen(n, arr, col + 1))
      {
        return true;
      }
      ans.pop_back();
      arr[i][col] = 0;
    }
  }
  return false;
}
int main()
{
  int n;
  cin >> n;
  if (n == 2 || n == 3)
  {
    out << "NO SOLUTION EXIST";
  }
  else
  {
    vector<vector<int>> arr(n, vector<int>(n, 0));
    N_Queen(n, arr, 0);
  }
  return 0;
}
