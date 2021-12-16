#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD = 1e9 + 7;
int main()
{
  ofstream out("y.txt");
  ifstream in("x.txt");
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m, a, b, c, t;
  in >> n >> m;
  vector<pair<ll, ll>> adj[n + 1];
  vector<ll> dist(n + 1, INT64_MAX), freq(n + 1, 0), mx(n + 1, 0), mn(n + 1, 0), visited(n + 1, 0);
  for (ll i = 0; i < m; i++)
  {
    in >> a >> b >> c;
    adj[a].push_back({b, c});
  }
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
  q.push({1, 0});
  dist[1] = 0;
  freq[1] = 1;
  while (!q.empty())
  {
    ll X = q.top().first;
    q.pop();
    if (visited[X])
    {
      continue;
    }
    visited[X] = 1;
    for (auto [next, cost] : adj[X])
    {
      cout << "X";
      t = dist[X] + cost;
      if (dist[next] == t)
      {
        freq[next] = (freq[X] + freq[next]) % MOD;
        mn[next] = min(mn[X] + 1, mn[next]);
        mx[next] = max(mx[X] + 1, mx[next]);
      }
      else if (dist[next] > t)
      {
        dist[next] = t;
        freq[next] = freq[X];
        mn[next] = mn[X] + 1;
        mx[next] = mx[X] + 1;
        q.push({next, dist[next]});
      }
    }
  }
  out << dist[n] << " " << freq[n] << " " << mn[n] << " " << mx[n] << "\n";
  return 0;
}
