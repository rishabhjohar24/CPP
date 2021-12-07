#include <bits/stdc++.h>
using namespace std;
const int sz = 1e6;
vector<int> adj[sz], color(sz, -1), visited(sz, 0);
// using DFS
bool isBipartiteDFS(int node, int c)
{
  visited[node] = 1;
  color[node] = c;
  for (auto child : adj[node])
  {
    if (visited[child])
    {
      if (!isBipartiteDFS(child, c ^ 1))
      {
        return false;
      }
    }
    else
    {
      if (color[child] == color[node])
      {
        return false;
      }
    }
  }
  return true;
}
// using BFS
bool isBipartiteBFS(int node, int c)
{
  queue<int> q;
  q.push(node);
  color[node] = c;
  while (!q.empty())
  {
    node = q.front();
    q.pop();
    for (auto child : adj[node])
    {
      if (child == node)
      {
        return false;
      }
      if (color[child] == -1)
      {
        color[child] = color[node] ^ 1;
        q.push(child);
      }
      if (color[node] == color[child])
      {
        return false;
      }
    }
  }
  return true;
}
int main()
{
  int n, m, a, b;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b;
    adj[a].push_back(b), adj[b].push_back(a);
  }
  cout << isBipartiteBFS(0, 0);
  cout << isBipartiteDFS(0, 0);
  return 0;
}