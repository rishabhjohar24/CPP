#include <bits/stdc++.h>
#define ll long long
using namespace std;
// using prefix technique
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q;
  cin >> n >> q;
  vector<ll> arr(n), pre(n + 1, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    pre[i + 1] = pre[i] ^ arr[i];
  }
  while (q--)
  {
    int q1, q2;
    cin >> q1 >> q2;
    cout << (pre[q2] ^ pre[q1 - 1]) << "\n";
  }
  return 0;
}
// Segment tree technique
//  const ll sz = 1e7 + 1;
//  ll *tree = new ll[sz];
//  void build(ll l, ll r, ll v, ll *arr)
//  {
//    if (l == r)
//    {
//      tree[v] = arr[l];
//    }
//    else
//    {
//      ll mid = (l + r) / 2;
//      build(l, mid, v << 1, arr);
//      build(mid + 1, r, v << 1 | 1, arr);
//      tree[v] = tree[v << 1] ^ tree[v << 1 | 1];
//    }
//    return;
//  }
//  ll query(ll l, ll r, ll v, ll q1, ll q2)
//  {
//    if (q1 > q2)
//    {
//      return 0;
//    }
//    if (l >= q1 && r <= q2)
//    {
//      return tree[v];
//    }
//    ll mid = (l + r) / 2;
//    return query(l, mid, v << 1, q1, min(mid, q2)) ^ query(mid + 1, r, v << 1 | 1, max(q1, mid + 1), q2);
//  }
//  int main()
//  {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll n, q;
//    cin >> n >> q;
//    ll *arr = new ll[n];
//    for (ll i = 0; i < n; i++)
//    {
//      cin >> arr[i];
//    }
//    build(0, n - 1, 1, arr);
//    while (q--)
//    {
//      ll q1, q2;
//      cin >> q1 >> q2;
//      cout << query(0, n - 1, 1, q1 - 1, q2 - 1) << "\n";
//    }
//    return 0;
//  }