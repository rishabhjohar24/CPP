#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll sz = 1e7;
ll *tree = new ll[sz];
void build(ll l, ll r, ll v, ll *arr)
{
  if (l == r)
  {
    tree[v] = arr[l];
  }
  else
  {
    ll mid = (l + r) >> 1;
    build(l, mid, v << 1, arr);
    build(mid + 1, r, v << 1 | 1, arr);
    tree[v] = 0;
  }
  return;
}
void update(ll l, ll r, ll v, ll q1, ll q2, ll val)
{
  if (q1 > q2)
  {
    return;
  }
  if (l >= q1 && r <= q2)
  {
    tree[v] += val;
  }
  else
  {
    ll mid = (l + r) >> 1;
    update(l, mid, v << 1, q1, min(mid, q2), val);
    update(mid + 1, r, v << 1 | 1, max(q1, mid + 1), q2, val);
  }
  return;
}
ll query(ll l, ll r, ll v, ll pos)
{
  if (l == r)
  {
    return tree[v];
  }
  ll mid = (l + r) >> 1;
  if (pos <= mid)
  {
    return tree[v] + query(l, mid, v << 1, pos);
  }
  return tree[v] + query(mid + 1, r, v << 1 | 1, pos);
}
int main()
{
  ll n;
  cin >> n;
  ll *arr = new ll[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  ll q1, q2, x;
  cin >> q1;
  cout << query(0, n - 1, 1, q1) << "\n";
  cin >> x >> q1 >> q2;
  update(0, n - 1, 1, q1 - 1, q2 - 1, x);
  cin >> q1;
  cout << query(0, n - 1, 1, q1);
  return 0;
}