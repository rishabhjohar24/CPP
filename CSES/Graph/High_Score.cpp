#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n, m, ans = INT64_MIN;
  cin >> n >> m;
  vector<ll> dist(n + 1, INT_MIN);
  d[1] = 0;
  vector<pair<ll, ll>> adj[n + 1];
  for (int i = 0; i < m; i++)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back({b, c});
  }
  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    }
  }
  return 0;
}