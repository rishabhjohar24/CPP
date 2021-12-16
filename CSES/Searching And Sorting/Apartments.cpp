#include <bits/stdc++.h>
#define ll long long
#define sort(x) sort(x.begin(), x.end());
using namespace std;
int main()
{
  ll n, m, k, i, j = 0, cnt = 0;
  cin >> n >> m >> k;
  vector<ll> apt(n), des(m);
  for (i = 0; i < n; i++)
  {
    cin >> apt[i];
  }
  for (i = 0; i < m; i++)
  {
    cin >> des[i];
  }
  sort(apt);
  sort(des);
  i = 0, j = 0;
  while (i < n && j < m)
  {
    if (abs(apt[i] - des[j]) <= k)
    {
      i++;
      j++;
      cnt++;
    }
    else
    {
      if (apt[i] - des[j] > k)
      {
        j++;
      }
      else
      {
        i++;
      }
    }
  }
  cout << cnt;
  return 0;
}