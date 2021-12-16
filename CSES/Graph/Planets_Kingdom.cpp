#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005], radj[100005];
vector<int> vis(100005, 0), scc, in;
void DFS(int node)
{
  if (vis[node])
  {
    return;
  }
  vis[node] = 1;
  for (auto i : adj[node])
  {
    DFS(i);
  }
  in.push_back(node);
  return;
}
void DFS1(int node)
{
  if (vis[node])
  {
    return;
  }
  vis[node] = 1;
  for (auto i : radj[node])
  {
    DFS1(i);
  }
  scc.push_back(node);
  return;
}
int main()
{
  int n, m, a, b, cnt = 1;
  cin >> n >> m;
  vector<int> ans(n + 1);
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b;
    adj[a].push_back(b);
    radj[b].push_back(a);
  }
  for (int i = 1; i <= n; i++)
  {
    if (!vis[i])
    {
      DFS(i);
    }
  }
  vis.assign(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    if (!vis[in[n - i]])
    {
      scc.clear();
      DFS1(in[n - i]);
      for (auto node : scc)
      {
        ans[node] = cnt;
      }
      cnt++;
    }
  }
  cout << cnt - 1 << "\n";
  for (int i = 1; i <= n; i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}