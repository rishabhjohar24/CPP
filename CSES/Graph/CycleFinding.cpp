#include <bits/stdc++.h>
#define ll long long
#define pi(x, y) pait<x, y>
using namespace std;
int main()
{
  ll n, m, a, b, c, X = 0;
  cin >> n >> m;
  vector<pair<ll, ll>> adj[n + 1];
  vector<ll> dist(n + 1, 1e18), par(n + 1, -1), ans;
  for (ll i = 0; i < m; i++)
  {
    cin >> a >> b >> c;
    adj[a].push_back({b, c});
  }
  dist[1] = 0, par[1] = -1;
  for (ll i = 1; i <= n - 1; i++)
  {
    X = -1;
    for (ll from = 1; from <= n; from++)
    {
      for (auto [node, cost] : adj[from])
      {
        ll t = dist[from] + cost;
        if (dist[node] > t)
        {
          par[node] = from;
          X = node;
          dist[node] = t;
        }
      }
    }
    if (X == -1)
    {
      cout << "NO";
      exit(0);
    }
  }
  cout << "YES\n";
  ll y = X;
  for (int i = 0; i < n; ++i)
  {
    y = par[y];
  }
  for (ll curr = y;; curr = par[curr])
  {
    ans.push_back(curr);
    if (curr == y && ans.size() > 1)
    {
      break;
    }
  }
  // ans.push_back(y);
  // ans.push_back(X);
  X = ans.size();
  for (ll i = X - 1; i >= 0; i--)
  {
    cout << ans[i] << " ";
  }
  return 0;
}