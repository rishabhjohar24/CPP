#include <bits/stdc++.h>
#define ll long long
using namespace std;
void DFS(vector<pair<ll, ll>> *adj, vector<ll> &vis, ll node)
{
  vis[node] = 1;
  for (auto [child, cost] : adj[node])
  {
    if (!vis[child])
    {
      DFS(adj, vis, child);
    }
  }
  return;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m, X = 0;
  cin >> n >> m;
  vector<ll> dist(n + 1, 1e18), vis(n + 1, 0), rvis(n + 1, 0);
  dist[1] = 0;
  vector<pair<ll, ll>> adj[n + 1], radj[n + 1];
  for (ll i = 0; i < m; i++)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back({b, -c});
    radj[b].push_back({a, -c});
  }
  DFS(adj, vis, 1);
  DFS(radj, rvis, n);
  dist[1] = 0;
  for (ll i = 1; i <= n; i++)
  {
    X = 0;
    for (ll from = 1; from <= n; from++)
    {
      for (auto [node, cost] : adj[from])
      {
        ll value = dist[from] + cost;
        if (vis[from] && rvis[node] && dist[node] > value)
        {
          X = 1;
          dist[node] = value;
        }
      }
    }
  }
  X ? cout << -1 : cout << (-1 * dist[n]);
  return 0;
}