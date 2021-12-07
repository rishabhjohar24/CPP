#include <bits/stdc++.h>
#include <fstream>
#define pb push_back
using namespace std;
const int sz = 1e6;
vector<int> adj[sz], par(sz, -1), level(sz, 0);
vector<vector<int>> bl(sz, vector<int>(32, -1));
void preProcess(int n)
{
  for (int i = 1; i <= n; i++)
  {
    bl[i][0] = par[i];
  }
  for (int i = 1; (1 << i) < n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (bl[j][i - 1] != -1)
      {
        bl[j][i] = bl[bl[j][i - 1]][i - 1];
      }
    }
  }
}
void DFS(int node)
{
  for (auto i : adj[node])
  {
    if (!level[i])
    {
      level[i] = level[node] + 1;
      DFS(i);
    }
  }
  return;
}
void bind(int n)
{
  level[1];
  DFS(1);
  preProcess(n);
}
int LCA(int p, int q, int n)
{
  if (level[p] > level[q])
  {
    swap(p, q);
  }
  int diff = level[q] - level[p];
  while (diff)
  {
    int j = log2(diff);
    q = bl[q][j];
    diff -= (1 << j);
  }
  if (p == q)
  {
    return p;
  }
  for (int i = n; i >= 0; i--)
  {
    if (bl[q][i] != -1 && bl[q][i] != bl[p][i])
    {
      q = bl[q][i];
      p = bl[p][i];
    }
  }
  return bl[q][0];
}
int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int n, m, a, b, q;
  cin >> n;
  for (int i = 0; i < n - 1; i++)
  {
    cin >> a >> b;
    adj[a].pb(b);
    par[b] = a;
  }
  bind(n);
  cin >> q;
  while (q--)
  {
    cin >> m >> a >> b;
    int lca = LCA(a, b, n);
    if (!m)
    {
      (lca == a) ? cout << "YES" : cout << "NO";
    }
    else
    {
      (lca == b) ? cout << "YES" : cout << "NO";
    }
    cout << "\n";
  }
  return 0;
}