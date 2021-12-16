#include <bits/stdc++.h>
using namespace std;
const long sz = 4 * (1e6 + 1);
long *tree = new long[sz];
void build(long l, long r, long v, long *arr)
{
  if (l == r)
  {
    tree[v] = arr[l];
    return;
  }
  else
  {
    long mid = (l + r) / 2;
    build(l, mid, 2 * v, arr);
    build(mid + 1, r, 2 * v + 1, arr);
    long a = tree[2 * v], b = tree[2 * v + 1];
    tree[v] = a > b ? b : a;
  }
  return;
}
void update(long l, long r, long v, long pos, long val)
{
  if (l == r)
  {
    tree[v] = val;
  }
  else
  {
    long mid = (l + r) / 2;
    if (pos <= mid)
    {
      update(l, mid, 2 * v, pos, val);
    }
    else
    {
      update(mid + 1, r, 2 * v + 1, pos, val);
    }
    long a = tree[2 * v], b = tree[2 * v + 1];
    tree[v] = a > b ? b : a;
  }
}
long query(long l, long r, long v, long q1, long q2)
{
  if (q1 > q2)
  {
    return INT_MAX;
  }
  if (l >= q1 && r <= q2)
  {
    return tree[v];
  }
  long mid = (l + r) / 2;
  return min(query(l, mid, 2 * v, q1, min(mid, q2)), query(mid + 1, r, 2 * v + 1, max(q1, mid + 1), q2));
}
int main()
{
  long n, q;
  cin >> n >> q;
  long *arr = new long[n];
  for (long i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  while (q--)
  {
    long q1, q2, x;
    cin >> x >> q1 >> q2;
    if (x & 1)
    {
      update(0, n - 1, 1, q1 - 1, q2);
    }
    else
    {
      cout << query(0, n - 1, 1, q1 - 1, q2 - 1) << "\n";
    }
  }
  return 0;
}