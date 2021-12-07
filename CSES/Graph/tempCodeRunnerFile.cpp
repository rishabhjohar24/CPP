#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<bool> visited(5001, false);
ll solve(ll n, ll node, vector<pair<ll, ll>> adj[], ll x, ll &ans)
{
  if (node == n)
  {
    return x;
  }
  if (visited[node])
  {
    return 0;
  }
  visited[node] = true;
  for (auto i : adj[node])
  {
    ans = max(ans, solve(n, i.first, adj, x + i.second, ans));
  }
  visited[node] = false;
  return ans;
}
int main()
{
  ll n, m, ans = INT64_MIN;
  cin >> n >> m;
  vector<pair<ll, ll>> adj[n + 1];
  for (int i = 0; i < m; i++)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back({b, c});
  }
  cout << solve(n, 1, adj, 0, ans);
  return 0;
}