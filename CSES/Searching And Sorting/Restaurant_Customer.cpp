#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n, a, b, j = 0, ans = 0;
  cin >> n;
  vector<pair<ll, char>> arr(2 * n);
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;
    arr[j] = {a, 'x'};
    arr[j + 1] = {b, 'y'};
    j += 2;
  }
  sort(arr.begin(), arr.end());
  j = 0;
  for (auto i : arr)
  {
    if (i.second == 'x')
    {
      j++;
      ans = max(ans, j);
    }
    else
    {
      j--;
      ans = max(ans, j);
    }
  }
  cout << ans;
  return 0;
}