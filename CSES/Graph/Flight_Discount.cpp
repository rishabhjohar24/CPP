#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll p = 1e6 + 1;
vector<pair<ll, ll>> adj[p], revr[p];
vector<ll> Dijkstra(vector<pair<ll, ll>> adj[], ll node, ll n)
{
  // vector<bool> present(n + 1, false);
  vector<ll> dist(n + 1, INT64_MAX);
  priority_queue<pair<ll, ll>> q;
  q.push({0, node});
  dist[node] = 0;
  while (!q.empty())
  {
    auto fs = q.top().first, ss = q.top().second;
    q.pop();
    if (dist[ss] != -fs)
    {
      continue;
    }
    for (auto i : adj[ss])
    {
      ll t = i.second + dist[ss];
      if (dist[i.first] > t)
      {
        dist[i.first] = t;
        q.push({-t, i.first});
      }
    }
  }
  return dist;
}
int main()
{
  ll n, m;
  cin >> n >> m;
  for (ll i = 0; i < m; i++)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back({b, c});
    revr[b].push_back({a, c});
  }
  vector<ll> fwd = Dijkstra(adj, 1, n);
  vector<ll> rev = Dijkstra(revr, n, n);
  ll mn = INT64_MAX;
  for (int i = 1; i <= n; i++)
  {
    for (auto j : adj[i])
    {
      if (fwd[i] == INT64_MAX || rev[j.first] == INT64_MAX)
      {
        continue;
      }
      mn = min(mn, fwd[i] + (j.second / 2) + rev[j.first]);
    }
  }
  cout << mn << endl;
  return 0;
}