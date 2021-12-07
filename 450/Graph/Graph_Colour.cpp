#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, e, a, b, m, mx = INT_MIN;
  cin >> n >> e >> m;
  queue<int> q;
  vector<int> visited(n + 1, 0), color(n, 1);
  vector<int> adj[n + 1];
  for (int i = 0; i < e; i++)
  {
    cin >> a >> b;
    adj[a].push_back(b), adj[b].push_back(a);
  }
  for (int i = 0; i < n; i++)
  {
    if (visited[i])
    {
      continue;
    }
    visited[i] = 1;
    q.push(i);
    while (!q.empty())
    {
      a = q.front();
      q.pop();
      for (auto j : adj[a])
      {
        if (color[a] == color[j])
        {
          color[j]++;
        }
        mx = max(mx, color[j]);
        if (mx > m)
        {
          cout << "Not Possible";
          exit(0);
        }
        if (!visited[j])
        {
          cout << j << " ";
          visited[j] = 1;
          q.push(j);
        }
      }
      cout << endl;
    }
  }
  for (auto i : color)
  {
    cout << i << " ";
  }
  return 0;
}