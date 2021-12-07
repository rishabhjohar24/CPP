#include <bits/stdc++.h>
using namespace std;
#define ll long long
void fast()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
ll answer(vector<ll> arr, ll n)
{
  ll result = 0;
  for (ll i = 0; i < n; i++)
  {
    ll mx = arr[i], mn = arr[i];
    set<ll> s;
    for (ll j = i; j < n; j++)
    {
      s.insert(arr[j]);
      mx = max(mx, arr[j]);
      mn = min(mn, arr[j]);
      if (j - i < 2)
      {
        continue;
      }
      ll value = 0;
      auto it = s.lower_bound((mx + mn) / 2);
      if (it != s.end())
      {
        value = max(value, (mx - (*it)) * ((*it) - mn));
      }
      if (it != s.begin())
      {
        it--;
        value = max(value, (mx - (*it)) * ((*it) - mn));
      }
      result += value;
    }
  }
  return result;
}
void solution()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << answer(arr, n) << endl;
}
int main()
{
  fast();
  ll tr;
  cin >> tr;
  while (tr--)
  {
    solution();
  }
  return 0;
}