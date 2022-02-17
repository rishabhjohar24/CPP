#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll sz = 1e7;
struct Node
{
  ll sum = 0;
  ll pre = 0;
};
vector<Node> tree(sz);
void merge(ll v)
{
  ll a = v << 1, b = v << 1 | 1;
  tree[v].sum = tree[a].sum + tree[b].sum;
  tree[v].pre = max(tree[a].pre, tree[a].sum + tree[b].pre);
}
ll _mid(ll l, ll r)
{
  return (l + r) >> 1;
}
void build(ll l, ll r, ll v, vector<ll> &arr)
{
  if (l == r)
  {
    tree[v] = {arr[l], arr[l]};
  }
  else
  {
    ll mid = _mid(l, r), a = v << 1, b = v << 1 | 1;
    build(l, mid, a, arr);
    build(mid + 1, r, b, arr);
    merge(v);
  }
  return;
}
void update(ll l, ll r, ll v, ll q1, ll q2, ll val)
{
  if (q1 > q2)
  {
    return;
  }
  if (l >= q1 && q2 <= r)
  {
    tree[v] = {val, val};
  }
  else
  {
    ll mid = _mid(l, r), a = v << 1, b = v << 1 | 1;
    update(l, mid, a, q1, min(mid, q2), val);
    update(mid + 1, r, b, max(q1, mid + 1), q2, val);
    merge(v);
  }
}
Node query(ll l, ll r, ll v, ll q1, ll q2)
{
  if (q1 > q2)
  {
    return {0, 0};
  }
  if (l >= q1 && r <= q2)
  {
    return tree[v];
  }
  ll mid = _mid(l, r), a = v << 1, b = v << 1 | 1;
  Node left = query(l, mid, a, q1, min(mid, q2));
  Node right = query(mid + 1, r, b, q1, max(mid + 1, q2));
  return {left.sum + right.sum, max(left.pre, left.sum + right.pre)};
}
int main()
{
  ifstream in("x.txt");
  ofstream out("y.txt");
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n, q, x, q1, q2;
  cin >> n >> q;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  while (q--)
  {
    cin >> x >> q1 >> q2;
    if (x == 1)
    {
      update(0, n - 1, 1, q1 - 1, n - 1, q2);
    }
    else
    {
      cout << query(0, n - 1, 1, q1 - 1, q2 - 1).pre << "\n";
    }
  }
  return 0;
}
// TLE
//  vector<ll> tree(sz);
//  ll _mid(ll l, ll r)
//  {
//    return (l + r) >> 1;
//  }
//  void build(ll l, ll r, ll v, const vector<ll> &arr)
//  {
//    if (l == r)
//    {
//      tree[v] = arr[l];
//    }
//    else
//    {
//      ll mid = _mid(l, r), a = v << 1, b = v << 1 | 1;
//      build(l, mid, a, arr);
//      build(mid + 1, r, b, arr);
//      tree[v] = tree[a] + tree[b];
//    }
//    return;
//  }
//  ll sum(ll l, ll r, ll v, ll q1, ll q2, ll &mx, ll &pre)
//  {
//    if (q1 > q2)
//    {
//      return 0;
//    }
//    if (l == r && l >= q1 && r <= q2)
//    {
//      // cout << pre << " ";
//      mx = max(pre, mx);
//      pre += tree[v];
//      // cout << pre << "\n";
//      mx = max(pre, mx);
//      return tree[v];
//    }
//    ll mid = _mid(l, r);
//    return sum(l, mid, v << 1, q1, min(mid, q2), mx, pre) + sum(mid + 1, r, v << 1 | 1, max(q1, mid + 1), q2, mx, pre);
//  }
//  void update(ll l, ll r, ll v, ll pos, ll val)
//  {
//    if (l == r)
//    {
//      tree[v] = val;
//    }
//    else
//    {
//      ll mid = _mid(l, r), a = v << 1, b = v << 1 | 1;
//      if (pos <= mid)
//      {
//        update(l, mid, a, pos, val);
//      }
//      else
//      {
//        update(mid + 1, r, b, pos, val);
//      }
//      tree[v] = tree[a] + tree[b];
//    }
//  }
//  int main()
//  {
//    // ofstream out("x.txt");
//    // ifstream in("y.txt");
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    ll n, q, q1, q2, k, mx = INT_MIN, pre = 0, x;
//    cin >> n >> q;
//    vector<ll> arr(n);
//    for (ll i = 0; i < n; i++)
//    {
//      cin >> arr[i];
//    }
//    build(0, n - 1, 1, arr);
//    while (q--)
//    {
//      mx = 0, pre = 0;
//      cin >> x >> q1 >> q2;
//      if (x == 1)
//      {
//        update(0, n - 1, 1, q1 - 1, q2);
//      }
//      else
//      {
//        sum(0, n - 1, 1, q1 - 1, q2 - 1, mx, pre);
//        cout << mx << "\n";
//      }
//    }
//    return 0;
//  }