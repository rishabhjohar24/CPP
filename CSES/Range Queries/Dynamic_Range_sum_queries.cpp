#include <bits/stdc++.h>
using namespace std;
const long long sz = 4 * (1e7);
long long *tree = new long long[sz];
void build(long long l, long long r, long long v, long long *arr)
{
  if (l == r)
  {
    tree[v] = arr[l];
    return;
  }
  long long mid = (l + r) / 2;
  build(l, mid, v << 1, arr);
  build(mid + 1, r, v << 1 | 1, arr);
  tree[v] = tree[v << 1] + tree[v << 1 | 1];
  return;
}
long long sum(long long l, long long r, long long v, long long q1, long long q2)
{
  if (q1 > q2)
  {
    return 0;
  }
  if (l >= q1 && r <= q2)
  {
    return tree[v];
  }
  long long mid = (l + r) / 2;
  return sum(l, mid, v << 1, q1, min(mid, q2)) + sum(mid + 1, r, v << 1 | 1, max(q1, mid + 1), q2);
}
void update(long long l, long long r, long long v, long long pos, long long val)
{
  if (l == r)
  {
    tree[v] = val;
  }
  else
  {
    long long mid = (l + r) / 2;
    if (pos <= mid)
    {
      update(l, mid, v << 1, pos, val);
    }
    else
    {
      update(mid + 1, r, v << 1 | 1, pos, val);
    }
    tree[v] = tree[v << 1] + tree[v << 1 | 1];
  }
  return;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n, q;
  cin >> n >> q;
  long long *arr = new long long[n];
  for (long long i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  while (q--)
  {
    long long x, q1, q2;
    cin >> x >> q1 >> q2;
    if (x & 1)
    {
      update(0, n - 1, 1, q1 - 1, q2);
    }
    else
    {
      x = sum(0, n - 1, 1, q1 - 1, q2 - 1);
      cout << x << "\n";
    }
  }
  return 0;
}