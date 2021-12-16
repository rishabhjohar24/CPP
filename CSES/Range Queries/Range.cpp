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
    build(l, mid, 2 * v, arr);
    build(mid + 1, r, 2 * v + 1, arr);
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
    update(l, mid, 2 * v, q1, min(q2, mid), val);
    update(mid + 1, r, 2 * v + 1, max(q1, mid + 1), q2, val);
  }
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, q;
  cin >> n >> q;
  ll *arr = new ll[sz];
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  while (q--)
  {
    ll x, a, b, u, k;
    cin >> x;
    if (x & 1)
    {
      cin >> a >> b >> u;
      update(0, n - 1, 1, a - 1, b - 1, u);
    }
    else
    {
      cin >> k;
      cout << query(0, n - 1, 1, k - 1) << "\n";
    }
  }
  return 0;
}