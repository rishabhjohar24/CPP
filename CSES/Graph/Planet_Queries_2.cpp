#include <bits/stdc++.h>
using namespace std;
void DFS(int node, vector<int> &vis, vector<int> &level, vector<vector<int>> &lift)
{
  if (vis[node])
  {
    return;
  }
  vis[node] = 1;
  DFS(lift[node][0], vis, level, lift);
  level[node] = level[lift[node][0]] + 1;
  return;
}
int LCA(int a, int b, int n, vector<int> &level, vector<vector<int>> &lift)
{
  if (level[b] < level[a])
  {
    swap(a, b);
  }
  int diff = level[b] - level[a];
  for (int i = log2(n) - 1; i >= 0; i--)
  {
    if (diff & (1 << i))
    {
      b = lift[b][i];
    }
  }
  if (a == b)
  {
    return b;
  }
  for (int i = log2(n) - 1; i >= 0; i--)
  {
    if (lift[b][i] != lift[a][i])
    {
      a = lift[a][i];
      b = lift[b][i];
    }
  }
  return a == b ? a : -1;
}
int main()
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n, q;
  cin >> n >> q;
  vector<int> vis(n + 1, 0), level(n + 1, 0);
  vector<vector<int>> lift(n + 1, vector<int>(log2(n), -1));
  for (int i = 1; i <= n; i++)
  {
    cin >> lift[i][0];
  }
  for (int j = 1; (1 << j) < n; j++)
  {
    for (int i = 1; i <= n; i++)
    {
      if (lift[i][j - 1] != -1)
      {
        lift[i][j] = lift[lift[i][j - 1]][j - 1];
      }
    }
  }
  for (int i = 1; i <= n; i++)
  {
    if (!vis[i])
    {
      DFS(i, vis, level, lift);
    }
  }
  while (q--)
  {
    int a, b, lca;
    cin >> a >> b;
    lca = LCA(a, b, n, level, lift);
    lca == -1 ? cout << -1 : cout << level[b] + level[a] - (2 * level[lca]);
    cout << "\n";
  }
  return 0;
}
// -1
// 3
// 0
// 0
// -1
// 1
// 0
// 0
// 1
// -1