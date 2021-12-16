#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n, m, cnt = 0;
  cin >> n >> m;
  vector<int> arr(n), x(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int i = 0, j = n - 1;
  sort(arr.begin(), arr.end());
  while (i < j)
  {
    ll val = arr[i] + arr[j];
    (val <= m) ? x[i] = x[j] = 1, i++, j--, cnt++ : j--;
  }
  for (auto i : x)
  {
    cnt += !i;
  }
  cout << cnt;
  return 0;
}