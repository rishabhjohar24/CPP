#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
const ll sz = 1e6;
vector<pair<ll, ll>> arr[sz];
int main()
{
  ll n, m, a, b, c, src;
  cin >> n >> m >> src;
  vector<ll> in(n), topo, dist(n, -1e6);
  queue<ll> q;
  dist[src] = 0;
  for (ll i = 0; i < m; i++)
  {
    cin >> a >> b >> c;
    in[b]++;
    arr[a].pb({b, c});
  }
  for (int i = 0; i < n; i++)
  {
    if (!in[i])
    {
      q.push(i);
    }
  }
  while (!q.empty())
  {
    m = q.front();
    topo.pb(m);
    q.pop();
    for (auto i : arr[m])
    {
      in[i.first]--;
      if (!in[i.first])
      {
        q.push(i.first);
      }
    }
  }
  for (auto i : topo)
  {
    if (dist[i] != -1e6)
    {
      for (auto j : arr[i])
      {
        dist[j.first] = max(dist[j.first], dist[i] + j.second);
      }
    }
  }
  for (auto i : dist)
  {
    (i == -1e6) ? cout << "x " : cout << i << " ";
  }
  return 0;
}