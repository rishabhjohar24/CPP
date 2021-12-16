#include <bits/stdc++.h>
using namespace std;
int x, y;
const int sz = 2e5 + 5;
vector<int> adj[sz], vis(sz, 0);
vector<vector<int>> dist(2, vector<int>(sz, 0));
void DFS(int node, int &maxLen, int len, int i)
{
  if (vis[node])
  {
    return;
  }
  if (len > maxLen)
  {
    maxLen = len;
    x = node;
  }
  if (i >= 0)
  {
    dist[i][node] = len;
  }
  vis[node] = 1;
  for (auto child : adj[node])
  {
    DFS(child, maxLen, len + 1, i);
  }
  return;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, a, b;
  cin >> n;

  for (int i = 0; i < n - 1; i++)
  {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  DFS(1, b = 0, 0, -1);
  y = x;
  vis.assign(n + 1, 0);
  DFS(x, b = 0, 0, 0);
  vis.assign(n + 1, 0);
  DFS(x, b = 0, 0, 1);
  for (int i = 1; i <= n; i++)
  {
    cout << max(dist[0][i], dist[1][i]) << " ";
  }
  return 0;
}