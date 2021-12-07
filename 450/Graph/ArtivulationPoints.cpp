#include <bits/stdc++.h>
using namespace std;
vector<int> adj[int(1e6)], in(1e6, 0), low(1e6, 0), visited(1e6, 0), isCut(1e6, 0);
int timer = 1;
void DFS(int node, int parent)
{
  int children = 0;
  visited[node] = 1;
  in[node] = timer;
  low[node] = timer;
  timer++;
  for (auto child : adj[node])
  {
    if (child == parent)
    {
      continue;
    }
    if (visited[child])
    {
      low[node] = min(in[child], low[node]);
    }
    else if (!visited[child])
    {
      DFS(child, node);
      if (low[child] >= in[node] && parent != -1)
      {
        isCut[node] = 1;
      }
      children++;
      low[node] = min(low[node], low[child]);
    }
  }
  if (parent == -1 && children > 1)
  {
    isCut[node] = 1;
  }
  return;
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
  for (int i = 0; i < n; i++)
  {
    if (!visited[i])
    {
      DFS(i, -1);
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (isCut[i])
    {
      cout << i << " ";
    }
  }
  return 0;
}