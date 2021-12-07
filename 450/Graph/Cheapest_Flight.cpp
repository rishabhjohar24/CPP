#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
const ll sz = 1e6;
vector<pair<ll, ll>> adj[sz];
vector<ll> dist(sz, INT_MAX), vis(sz, 0);
priority_queue<ll> q;
void DFS(ll dest, ll src, ll k)
{
  vis[src] = 1;
  if (k <= 0 && dest != src)
  {
    return;
  }
  if (k >= 0 && src == dest)
  {
    q.push(dist[src]);
    return;
  }
  for (auto node : adj[src])
  {
    if (!vis[node.first])
    {
      dist[node.first] = min(dist[node.first], dist[src] + node.second);
      DFS(dest, node.first, k - 1);
    }
  }
  vis[src] = 0;
  return;
}
int main()
{
  ll n, m, src, dest, k;
  cin >> n >> m;
  for (ll i = 0; i < m; i++)
  {
    cin >> src >> dest >> k;
    adj[src].pb({dest, k});
  }
  cin >> src >> dest >> k;
  dist[src] = 0;
  DFS(dest, src, k + 1);
  (q.empty()) ? cout << -1 : cout << q.top();
  return 0;
}