#include <bits/stdc++.h>
using namespace std;
int find(int a, vector<int> &par, int &ans)
{
  ans++;
  return (par[a] == -1) ? a : par[a] = find(par[a], par, ans);
}
int main()
{
  int n, m, x, y;
  cin >> n >> m;
  vector<int> par(n + 1, -1);
  vector<pair<int, int>> arr(m);
  for (int i = 0; i < m; i++)
  {
    cin >> x >> y;
    arr[i] = {x, y};
  }
  for (int i = 0; i < m; i++)
  {
    int ans = 0, mx = INT_MIN;
    x = find(arr[i].first, par, ans);
    y = find(arr[i].second, par, )
  }
  return 0;
}