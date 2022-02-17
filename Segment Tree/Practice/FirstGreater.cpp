#include <bits/stdc++.h>
using namespace std;
const int sz = 1e7;
vector<int> tree(sz, 0);
void build(int l, int r, int v, vector<int> &arr)
{
  if (l == r)
  {
    tree[v] = arr[l];
  }
  else
  {
    int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    build(l, mid, a, arr);
    build(mid + 1, r, b, arr);
    tree[v] = (tree[a] >= tree[b]) ? tree[a] : tree[b];
  }
  return;
}
void update(int l, int r, int v, int pos, int val)
{
  if (l > r)
  {
    return;
  }
  if (l == r)
  {
    tree[v] = val;
  }
  else
  {
    int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    (mid >= pos) ? update(l, mid, a, pos, val) : update(mid + 1, r, b, pos, val);
    tree[v] = (tree[a] >= tree[b]) ? tree[a] : tree[b];
  }
  return;
}
int query(int l, int r, int v, int q1, int q2, int x)
{
  if (q1 > q2)
  {
    return -1;
  }
  if (l >= q1 && r <= q2)
  {
    if (tree[v] <= x)
    {
      return -1;
    }
    while (l < r)
    {
      int mid = (l + r) >> 1;
      if (tree[v << 1] > x)
      {
      }
    }
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  return 0;
}