#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n, m, x, p = 0, q = 0;
  cin >> n >> m;
  vector<pair<ll, ll>> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    arr[i] = {x, i + 1};
  }
  sort(arr.begin(), arr.end());
  ll i = 0, j = n - 1;
  while (i < j)
  {
    x = arr[i].first + arr[j].first;
    if (x == m)
    {
      p = arr[i].second, q = arr[j].second;
      break;
    }
    else if (x > m)
    {
      j--;
    }
    else
    {
      i++;
    }
  }
  if (p > q)
  {
    swap(p, q);
  }
  p ? cout << p << " " << q : cout << "IMPOSSIBLE";
  return 0;
}
