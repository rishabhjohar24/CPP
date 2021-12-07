#include <bits/stdc++.h>
#define pb push_back
using namespace std;
const int sz = 1e6;
vector<pair<int, int>> adj[sz];
vector<bool> path(sz, false);
bool kPath(int src, int k)
{
  path[src] = true;
  if (k <= 0)
  {
    return true;
  }
  for (auto i : adj[src])
  {
    if (path[i.first])
    {
      continue;
    }
    if (i.second >= k)
    {
      return true;
    }
    path[i.first] = true;
    if (kPath(i.first, k - i.second))
    {
      return true;
    }
    path[i.first] = false;
  }
  return false;
}
int main()
{
  int n, m, a, b, c;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b >> c;
    adj[a].pb({b, c}), adj[b].pb({a, c});
  }
  cout << kPath(0, 70);
  cout << kPath(0, 68);
  return 0;
}
