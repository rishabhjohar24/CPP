#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m, q;
  cin >> n >> m >> q;
  vector<vector<ll>> arr(n + 1, vector<ll>(n + 1, 1e18));
  for (int i = 0; i < m; i++)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    if (c < arr[a][b])
    {
      arr[a][b] = c;
      arr[b][a] = c;
    }
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
          arr[j][i] = arr[i][k] + arr[k][j];
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
    if (arr[a][b] == 1e18)
    {
      arr[a][b] = -1;
    }
    cout << arr[a][b] << "\n";
  }
  return 0;
}