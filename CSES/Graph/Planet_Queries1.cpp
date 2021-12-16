#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, q, a, b;
  cin >> n >> q;

  ll lift[n + 1][31] = {{0}};
  for (ll i = 1; i <= n; i++)
  {
    cin >> lift[i][0];
  }
  for (ll j = 1; j < 30; j++)
  {
    for (ll i = 1; i <= n; i++)
    {
      lift[i][j] = lift[lift[i][j - 1]][j - 1];
    }
  }
  while (q--)
  {
    cin >> a >> b;
    for (ll i = 0; i < 30; i++)
    {
      if (b & (1 << i))
      {
        a = lift[a][i];
      }
    }
    cout << a << endl;
  }
  return 0;
}