#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
const ll sz = 1e6;
vector<ll> adj[sz], vis(sz, 0);
ll comp(ll node)
{
  if (vis[node])
  {
    return 0;
  }
  vis[node] = 1;
  ll k = 1;
  for (auto i : adj[node])
  {
    k += comp(i);
  }
  return k;
}
int main()
{
  ll n, m, a, b, total = 0;
  cin >> n >> m;
  vector<ll> count;
  for (ll i = 0; i < m; i++)
  {
    cin >> a >> b;
    adj[a].pb(b), adj[b].pb(a);
  }
  for (ll i = 0; i < n; i++)
  {
    if (!vis[i])
    {
      ll temp = comp(i);
      total += temp;
      count.pb(temp);
    }
  }
  (total *= (total - 1)) /= 2;
  for (auto i : count)
  {
    total -= ((i * (i - 1)) / 2);
  }
  cout << total;
  return 0;
}