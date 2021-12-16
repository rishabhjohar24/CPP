#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ofstream out("y.txt");
  ifstream in("x.txt");
  ll n, m;
  in >> n >> m;
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
  vector<ll> level(n + 1, INT64_MAX);
  vector<pair<ll, ll>> adj[n + 1];
  for (ll i = 0; i < m; i++)
  {
    ll a, b, c;
    in >> a >> b >> c;
    adj[a].push_back({b, c});
  }
  q.push({1, 0});
  level[1] = 0;
  while (!q.empty())
  {
    auto x = q.top();
    q.pop();
    if (level[x.first] != x.second)
    {
      continue;
    }
    for (auto i : adj[x.first])
    {
      ll t = level[x.first] + i.second;
      if (level[i.first] > t)
      {
        level[i.first] = t;
        q.push({i.first, level[i.first]});
      }
    }
  }
  for (ll i = 1; i <= n; i++)
  {
    out << level[i] << " ";
  }
  return 0;
}