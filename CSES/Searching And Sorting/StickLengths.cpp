#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n, val, ans = 0;
  cin >> n;
  vector<ll> arr(n, 0);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  val = (n % 2) ? arr[n / 2] : (arr[n / 2] + arr[(n - 2) / 2]) / 2;
  for (ll i = 0; i < n; i++)
  {
    ans += abs(val - arr[i]);
  }
  cout << ans;
  return 0;
}