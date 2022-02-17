#include <bits/stdc++.h>
using namespace std;
const int sz = 1e6;
vector<int> tree(sz, 0);
void update(int l, int r, int v, int q1, int q2, int val)
{
  if (l == q1 && r == q2)
  {
    tree[v] = val;
  }
  int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
  if (tree[v])
  {
    update(l, mid, a, l, mid, tree[v]);
    update(mid + 1, r, b, mid + 1, r, tree[v]);
    tree[v] = 0;
  }
  if (q2 <= mid)
  {
    update(l, mid, a, q1, q2, val);
  }
  else if (mid < q1)
  {
    update(mid + 1, r, b, q1, q2, val);
  }
  else
  {
    update(l, mid, a, q1, mid, val);
    update(mid + 1, r, b, mid + 1, q2, val);
  }
  return;
}
int query(int l, int r, int v, int pos)
{
  if (l == r)
  {
    return tree[v];
  }
  if (tree[v])
  {
    return tree[v];
  }
  int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
  return (pos <= mid) ? query(l, mid, a, pos) : query(mid + 1, r, b, pos);
}
int main()
{
  int n, q, l, r, x, temp;
  cin >> n >> q;
  while (q--)
  {
    cin >> l >> r >> x;
    temp = query(0, n - 1, 1, x - 1);
    update(0, n - 1, 1, l - 1, r - 1, x);
    update(0, n - 1, 1, x - 1, x - 1, temp);
  }
  for (int i = 1; i <= n; i++)
  {
    cout << query(0, n - 1, 1, i - 1) << " ";
  }
  return 0;
}