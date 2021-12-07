#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int n, q;
  cin >> n >> q;
  vector<ll> arr(n + 1), pre(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    pre[i] = arr[i] + pre[i - 1];
  }
  while (q--)
  {
    ll a, b, ans = 0;
    cin >> a >> b;
    cout << pre[b] - pre[a - 1] << "\n";
  }
  return 0;
}