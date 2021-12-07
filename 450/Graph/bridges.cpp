#include <bits/stdc++.h>
using namespace std;
vector<int> adj[(int)1e6], visited(1e6, 0), in(1e6, 0), low(1e6, 0), parent(1e6, -1);
int timer = 0;
void DFS(int node)
{
  visited[node] = 1;
  low[node] = in[node] = timer++;
  for (auto child : adj[node])
  {
    if (!visited[child])
    {
      parent[child] = node;
      DFS(child);
      low[node] = min(low[node], low[child]);
      if (low[child] > in[node])
      {
        cout << node << " " << child << "\n";
      }
    }
    else if (child != parent[node])
    {
      low[node] = min(low[node], in[child]);
    }
  }
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
      DFS(i);
    }
  }
  return 0;
}