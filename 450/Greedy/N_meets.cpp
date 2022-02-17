#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
  return a.second < b.second;
}
int main()
{
  int n, ans = 0, prev = -1;
  cin >> n;
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first;
  }
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].second;
  }
  sort(arr.begin(), arr.end(), comp);
  for (int i = 0; i < n; i++)
  {
    if (prev < arr[i].first)
    {
      ans++;
      prev = arr[i].second;
    }
  }
  cout << ans;
  return 0;
}