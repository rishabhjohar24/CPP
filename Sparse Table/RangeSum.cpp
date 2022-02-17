#include <bits/stdc++.h>
using namespace std;
int main()
{
  srand(time(0));
  int n, val, l, r;
  cin >> n;
  vector<vector<int>> sparse(n + 1, vector<int>(log2(n) + 1, 0));
  for (int i = 0; i < n; i++)
  {
    cin >> sparse[i][0];
  }
  for (int j = 1; (1 << j) <= n; j++)
  {
    for (int i = 0; i + (1 << j) <= n; i++)
    {
      sparse[i][j] = min(sparse[i][j - 1], sparse[i + (1 << (j - 1))][j - 1]);
    }
  }
  cin >> l >> r;
  int sum = 0;
  for (int j = log2(n) + 1; j >= 0; j--)
  {
    if ((1 << j) <= r - l + 1)
    {
      sum += sparse[l][j];
      l += (1 << j);
    }
  }
  cout << sum;
  return 0;
}