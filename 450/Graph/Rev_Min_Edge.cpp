#include <bits/stdc++.h>
#define pii pair<int, int>
#define pb push_back
using namespace std;
const int sz = 1e6;
vector<pii> adj[sz];
int main()
{
  int n, m, src, dest;
  cin >> n >> m;
  vector<int> cost(n, sz);
  for (int i = 0; i < m; i++)
  {
    cin >> src >> dest;
    adj[src].pb({dest, 0});
    adj[dest].pb({src, 1});
  }
  cin >> src >> dest;
  queue<pii> q;
  cost[src] = 0;
  q.push({src, 0});
  while (!q.empty())
  {
    int node = q.front().first, pen = q.front().second;
    q.pop();
    for (auto x : adj[node])
    {
      if (cost[x.first] > cost[node] + x.second)
      {
        cost[x.first] = min(cost[x.first], cost[node] + x.second);
        q.push({x.first, cost[x.first]});
      }
    }
  }
  cout << cost[dest];
  return 0;
}