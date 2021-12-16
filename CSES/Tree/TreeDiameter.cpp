#include <bits/stdc++.h>
using namespace std;
int x;
void DFS(int node, vector<int> *adj, vector<int> &vis, int &maxDist, int dist)
{
  vis[node] = 1;
  if (dist > maxDist)
  {
    x = node;
    maxDist = dist;
  }
  for (auto i : adj[node])
  {
    if (!vis[i])
    {
      DFS(i, adj, vis, maxDist, dist + 1);
    }
  }
  return;
}
int main()
{
  int n, a, b;
  cin >> n;
  vector<int> adj[n + 1], vis(n + 1, 0);
  for (int i = 0; i < n - 1; i++)
  {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  DFS(1, adj, vis, b = 0, 0);
  vis.assign(n + 1, 0);
  DFS(x, adj, vis, b = 0, 0);
  cout << b;
  return 0;
}