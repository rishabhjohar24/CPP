#include <bits/stdc++.h>
using namespace std;
void DFS(vector<pair<int, int>> adj[], int st, int x, int n, int cnt, int &ans, int sum, vector<bool> &vis)
{
  if (x == st && cnt == n + 1)
  {
    ans = min(ans, sum);
    return;
  }
  if (x == -1)
  {
    x = st;
  }
  if (vis[x])
  {
    return;
  }
  vis[x] = true;
  for (auto i : adj[x])
  {
    DFS(adj, st, i.first, n, cnt + 1, ans, sum + i.second, vis);
    vis[i.first] = false;
  }
  return;
}
int main()
{
  int n, m, a, b, c, ans;
  cin >> n >> m;
  vector<bool> vis(n + 1, false);
  vector<pair<int, int>> adj[n + 1];
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b >> c;
    adj[a].push_back({b, c}), adj[b].push_back({a, c});
  }
  cin >> a;
  DFS(adj, a, -1, n, 1, ans, 0, vis);
  cout << ans;
  return 0;
}
5 10
0 1 12
0 3 19
0 4 8
0 2 10
1 2 3
1 3 7
1 4 2
3 4 4
3 2 6
4 2 20