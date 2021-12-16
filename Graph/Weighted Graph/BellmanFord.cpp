#include <bits/stdc++.h>
using namespace std;
struct edge
{
  int a, b, w;
};
void BellmanFord(vector<edge> &arr, int m, int n)
{
  int a, b, x = 0;
  cin >> a >> b;
  vector<int> dist(n, 1e9), par(n, -1);
  dist[a] = 0;
  for (int i = 0; i < n; i++)
  {
    x = -1;
    for (int j = 0; j < m; j++)
    {
      if (dist[arr[j].b] < 1e9)
      {
        if (dist[arr[j].b] > dist[arr[j].a] + arr[j].w)
        {
          x = arr[j].b;
          dist[arr[j].b] = dist[arr[j].a] + arr[j].w;
          par[arr[j].b] = arr[j].a;
        }
      }
    }
  }
  if (x == -1)
    cout << "No negative cycle from " << a;
  else
  {
    int y = x;
    for (int i = 0; i < n; ++i)
    {
      y = par[y];
    }
    vector<int> path;
    for (int cur = y;; cur = par[cur])
    {
      path.push_back(cur);
      if (cur == y && path.size() > 1)
      {
        break;
      }
    }
    reverse(path.begin(), path.end());
    cout << "Negative cycle: ";
    for (size_t i = 0; i < path.size(); ++i)
    {
      cout << path[i] << ' ';
    }
  }
}
int main()
{
  int n, m;
  cin >> n >> m;
  vector<edge> arr(m + 1);
  for (int i = 0; i < m; i++)
  {
    cin >> arr[i].a >> arr[i].b >> arr[i].w;
  }
  BellmanFord(arr, m, n);
  return 0;
}