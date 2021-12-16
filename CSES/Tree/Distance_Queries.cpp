#include <bits/stdc++.h>
using namespace std;
const int sz = 200005;
int lift[21][sz];
int level[sz];
vector<int> adj[sz];
void DFS(int node, int parent, int len)
{
  level[node] = len;
  lift[0][node] = parent;
  for (auto child : adj[node])
  {
    if (parent != child)
    {
      if (parent != child)
      {
        DFS(child, node, len + 1);
      }
    }
  }
  return;
}
int LCA(int a, int b, int n)
{
  if (level[a] < level[b])
  {
    swap(a, b);
  }
  int diff = level[a] - level[b];
  for (int i = log2(n); i >= 0; i--)
  {
    if (diff & (1 << i))
    {
      a = lift[i][a];
    }
  }
  if (a == b)
  {
    return a;
  }
  for (int i = log2(n); i >= 0; i--)
  {
    if (lift[i][a] != lift[i][b])
    {
      a = lift[i][a];
      b = lift[i][b];
    }
  }
  return lift[0][a];
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, q, a, b;
  cin >> n >> q;
  for (int i = 2; i <= n; i++)
  {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  DFS(1, -1, 0);
  for (int i = 1; (1 << i) <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (lift[i - 1][j] != -1)
      {
        lift[i][j] = lift[i - 1][lift[i - 1][j]];
      }
    }
  }
  while (q--)
  {
    cin >> a >> b;
    int p = LCA(a, b, n);
    cout << (level[a] + level[b] - 2 * level[p]) << "\n";
  }
}