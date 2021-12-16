#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n, a, b, cnt = 1, prev;
  cin >> n;
  vector<pair<ll, ll>> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> a >> b;
    arr[i] = {b, a};
  }
  sort(arr.begin(), arr.end());
  prev = arr[0].first;
  for (int i = 1; i < n; i++)
  {
    if (arr[i].second >= prev)
    {
      prev = arr[i].first;
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}