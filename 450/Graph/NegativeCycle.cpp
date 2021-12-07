#include <bits/stdc++.h>
using namespace std;
const int sz = 1e6;
struct edge
{
  int a, b, w;
};
int main()
{
  int n, m, x;
  cin >> n >> m;
  vector<int> dist(n + 1, sz);
  vector<edge> arr(m + 1);
  for (int i = 0; i < m; i++)
  {
    cin >> arr[i].a >> arr[i].b >> arr[i].w;
  }
  dist[0] = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m && i < n - 1; j++)
    {
      if (dist[arr[j].a] < 1e6)
      {
        if (dist[arr[j].b] > arr[j].w + dist[arr[j].a])
        {
          dist[arr[j].b] = arr[j].w + dist[arr[j].a];
        }
      }
    }
    if (i == n - 1)
    {
      for (int j = 0; j < m && i < n - 1; j++)
      {
        if (dist[arr[j].a] < 1e6)
        {
          if (dist[arr[j].b] > arr[j].w + dist[arr[j].a])
          {
            cout << "YES\n";
            break;
          }
        }
      }
    }
  }
  cout << "NO";
  return 0;
}