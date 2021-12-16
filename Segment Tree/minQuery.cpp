#include <bits/stdc++.h>
using namespace std;
const int sz = 4 * (1e5 + 1);
int *tree = new int[sz];
void build(int l, int r, int v, int *arr)
{
  if (l == r)
  {
    tree[v] = arr[l];
    return;
  }
  else
  {
    int mid = (l + r) / 2;
    build(l, mid, 2 * v, arr);
    build(mid + 1, r, 2 * v + 1, arr);
    int a = tree[2 * v], b = tree[2 * v + 1];
    tree[v] = a > b ? b : a;
  }
  return;
}
void update(int l, int r, int v, int pos, int val)
{
  if (l == r)
  {
    tree[v] = val;
  }
  else
  {
    int mid = (l + r) / 2;
    if (pos <= mid)
    {
      update(l, mid, 2 * v, pos, val);
    }
    else
    {
      update(mid + 1, r, 2 * v + 1, pos, val);
    }
    int a = tree[2 * v], b = tree[2 * v + 1];
    tree[v] = a > b ? b : a;
  }
}
int query(int l, int r, int v, int q1, int q2)
{
  if (q1 > q2)
  {
    return INT_MAX;
  }
  if (l >= q1 && r <= q2)
  {
    return tree[v];
  }
  int mid = (l + r) / 2;
  return min(query(l, mid, 2 * v, q1, min(mid, q2)), query(mid + 1, r, 2 * v + 1, max(q1, mid + 1), q2));
}
int main()
{
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  int q1, q2;
  cin >> q1 >> q2;
  cout << query(0, n - 1, 1, q1, q2) << "\n";
  cin >> q1 >> q2;
  update(0, n - 1, 1, q1, q2);
  cin >> q1 >> q2;
  cout << query(0, n - 1, 1, q1, q2);
  return 0;
}