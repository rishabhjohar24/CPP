#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll sz = 1e7;
struct Node
{
  ll num;
  ll c;
};
vector<Node> tree(sz, {0, 0});
void combine(int v)
{
  int a = v << 1, b = v << 1 | 1;
  Node x = tree[a], y = tree[b];
  if (!x.c)
  {
    tree[v] = {x.num | y.num, x.c ^ 1};
  }
  else
  {
    tree[v] = {x.num ^ y.num, x.c ^ 1};
  };
}
void build(ll l, ll r, ll v, vector<ll> &arr)
{
  if (l == r)
  {
    tree[v] = {arr[l], 0};
  }
  else
  {
    int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    build(l, mid, a, arr);
    build(mid + 1, r, b, arr);
    combine(v);
  }
  return;
}

void update(int l, int r, int v, int pos, int val)
{
  if (l == r)
  {
    tree[v] = {val, 0};
  }
  else
  {
    int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    if (pos <= mid)
    {
      update(l, mid, a, pos, val);
    }
    else
    {
      update(mid + 1, r, b, pos, val);
    }
    combine(v);
  }
  return;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, q, x, pos, val;
  cin >> n >> q;
  x = pow(2, n);
  vector<ll> arr(x, 0);
  for (ll i = 0; i < x; i++)
  {
    cin >> arr[i];
  }
  build(0, x - 1, 1, arr);
  while (q--)
  {
    cin >> pos >> val;
    update(0, x - 1, 1, pos - 1, val);
    cout << tree[1].num << "\n";
  }
  return 0;
}