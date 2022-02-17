#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
bool comp(pii a, pii b)
{
  return a.second < b.second;
}
int main()
{
  int n, a, b, c, m, cnt = 0;
  cin >> n >> m;
  vector<pii> arr[n + 1];
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b >> c;
    arr[c].push_back({a, b});
  }
  for (int i = 1; i <= n; i++)
  {
    sort(arr[i].begin(), arr[i].end(), comp);
  }
  for (int i = 1; i <= n; i++)
  {
    int prev = -1;
    for (int j = 0; j < arr[i].size(); j++)
    {
      if (prev < arr[i][j].first)
      {
        prev = arr[i][j].second;
        cnt++;
      }
    }
  }
  cout << cnt;
  return 0;
}