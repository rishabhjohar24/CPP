#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  using ll = long long;
  int n, m, q;
  cin >> n >> m >> q;
  vector<vector<ll>> arr(n + 1, vector<ll>(n + 1, INT64_MAX));
  for (int i = 0; i < m; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;
    arr[a][b] = c;
    arr[b][a] = c;
  }
  for (int k = 1; k <= n; k++)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = i + 1; j <= n; j++)
      {
        if ((arr[i][j] > arr[i][k] + arr[k][j]))
        {
          arr[i][j] = arr[i][k] + arr[k][j];
        }
      }
    }
  }
  while (q--)
  {
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
      arr[a][b] = 0;
    }
    if (arr[a][b] == INT64_MAX)
    {
      arr[a][b] = -1;
    }
    cout << arr[a][b] << "\n";
  }
  return 0;
}