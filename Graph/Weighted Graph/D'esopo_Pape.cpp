#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, a, b, c;
  cin >> n >> m;
  vector<int> dist(n + 1, 1e18), vis(n + 1, 2), par(n + 1, -1);
  vector<pair<int, int>> adj[n + 1];
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b >> c;
    adj[a].push_back({b, c});
  }
  cin >> b;
  deque<int> q;
  q.push_front(b);
  dist[b] = 0;
  par[b] = -1;
  while (!q.empty())
  {
    a = q.front();
    vis[a] = 0;
    q.pop_front();
    for (auto i : adj[a])
    {
      c = dist[a] + i.second;
      if (dist[i.first] > c)
      {
        dist[i.first] = c;
        par[i.first] = a;
        if (vis[i.first] == 2)
        {
          vis[i.first] = 1;
          q.push_back(i.first);
        }
        else if (!vis[i.first])
        {
          vis[i.first] = 1;
          q.push_front(i.first);
        }
      }
    }
  }
  return 0;
}