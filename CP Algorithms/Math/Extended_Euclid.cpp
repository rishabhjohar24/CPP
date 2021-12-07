#include <bits/stdc++.h>
#define ll long long
using namespace std;
int extendedEuclid(ll a, ll b, ll &x, ll &y, set<pair<ll, ll>> &ans)
{
  if (!b)
  {
    x = 1;
    y = 0;
    return a;
  }
  ll x1, y1, d = extendedEuclid(b, a % b, x1, y1, ans);
  x = y1;
  y = x1 - (y1 * (a / b));
  ans.insert({x, y});
  return d;
}
int main()
{
  ll a, b, gcd, x = 0, y = 0;
  set<pair<ll, ll>> ans;
  cin >> a >> b;
  gcd = extendedEuclid(a, b, x, y, ans);
  for (auto i : ans)
  {
    cout << i.first << " " << i.second << " " << gcd << " " << endl;
    break;
  }
  return 0;
}