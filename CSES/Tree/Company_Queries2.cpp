#include <bits/stdc++.h>
using namespace std;
const int sz = 200005;
int lift[21][sz];
vector<int> adj[sz];
int level[sz];
void DFS(int node, int len, int parent)
{
  lift[0][node] = parent;
  level[node] = len;
  for (auto child : adj[node])
  {
    if (parent != child)
    {
      DFS(child, len + 1, node);
    }
  }
}
int LCA(int p, int q, int n)
{
  if (level[p] < level[q])
    swap(p, q);

  int diff = level[p] - level[q];

  for (int i = log2(n); i >= 0; i--)
    if (diff & (1 << i))
    {
      p = lift[i][p];
    }
  if (p == q)
  {
    return p;
  }
  for (int i = log2(n); i >= 0; i--)
  {
    if (lift[i][p] != lift[i][q])
    {
      p = lift[i][p];
      q = lift[i][q];
    }
  }
  return lift[0][p];
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, q, a, b;
  cin >> n >> q;
  for (int i = 2; i <= n; i++)
  {
    cin >> a;
    adj[i].push_back(a);
    adj[a].push_back(i);
  }
  DFS(1, 0, -1);
  for (int i = 1; 1 << i <= n; i++)
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
    cout << LCA(a, b, n) << "\n";
  }
  return 0;
}