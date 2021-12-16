#include <bits/stdc++.h>
#define ll long long
#define pi(x, y) pair<x, y>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, m, k, a, b, c;
  cin >> n >> m >> k;
  vector<pi(ll, ll)> adj[n + 1];
  vector<ll> dist(n, 1e18), ans;
  for (ll i = 0; i < m; i++)
  {
    cin >> a >> b >> c;
    adj[a].push_back({b, c});
  }
  dist[1] = 0;
  priority_queue<ll> pq[n + 1];
  priority_queue<pi(ll, ll), vector<pi(ll, ll)>, greater<pi(ll, ll)>> q;
  q.push({1, 0});
  pq[1].push(0);
  while (q.size())
  {
    ll node = q.top().first, _cost = q.top().second;
    q.pop();
    if (_cost > pq[node].top())
    {
      continue;
    }
    for (auto child : adj[node])
    {
      ll cost = child.second, _node = child.first;
      ll value = _cost + cost;
      if (pq[_node].size() < k)
      {
        pq[_node].push(value);
        q.push({_node, value});
      }
      else if (value < pq[_node].top())
      {
        pq[_node].pop();
        pq[_node].push(value);
        q.push({_node, value});
      }
    }
  }
  while (pq[n].size())
  {
    ans.push_back(pq[n].top());
    pq[n].pop();
  }
  reverse(ans.begin(), ans.end());
  for (auto i : ans)
  {
    cout << i << " ";
  }
  return 0;
}