#include <bits/stdc++.h>
using namespace std;
const int sz = 1e7;
vector<int> tree(sz, 0);
void build(int l, int r, int v, vector<int> &arr)
{
  if (l == r)
  {
    tree[v] = (!arr[l]) ? 1 : 0;
  }
  else
  {
    int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    build(l, mid, a, arr);
    build(mid + 1, r, b, arr);
    tree[v] = tree[a] + tree[b];
  }
  return;
}
void update(int l, int r, int v, int pos, int val)
{
  if (l == r)
  {
    tree[v] = (!val) ? 1 : 0;
  }
  else
  {
    int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    (pos <= mid) ? update(l, mid, a, pos, val) : update(mid + 1, r, v, pos, val);
    tree[v] = tree[a] + tree[b];
  }
  return;
}
int query(int l, int r, int v, int k)
{
  if (k > tree[v])
  {
    return -1;
  }
  if (l == r)
  {
    return l;
  }
  int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
  return (tree[a] >= k) ? query(l, mid, a, k) : query(mid + 1, r, b, k);
}
int main()
{
  int n, q, k;
  cin >> n >> q;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  while (q--)
  {
    cin >> k;
    cout << query(0, n - 1, 1, k) << "\n";
  }
  return 0;
}