#include <bits/stdc++.h>
using namespace std;
vector<int> tree(1e7, 0);
void build(vector<int> arr, int l, int r, int v)
{
  if (l == r)
  {
    tree[v] = arr[l];
    return;
  }
  int mid = (l + r) / 2;
  build(arr, l, mid, 2 * v);
  build(arr, mid + 1, r, 2 * v + 1);
  tree[v] = tree[2 * v] + tree[2 * v + 1];
  return;
}
int sum(int l, int r, int v, int q1, int q2)
{
  if (q1 > q2)
  {
    return 0;
  }
  if (l >= q1 && r <= q2)
  {
    return tree[v];
  }
  int mid = (l + r) / 2;
  return sum(l, mid, 2 * v, q1, min(q2, mid)) + sum(mid + 1, r, 2 * v + 1, max(mid + 1, q1), q2);
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
    tree[v] = tree[2 * v] + tree[2 * v + 1];
  }
  return;
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
  build(arr, 0, n - 1, 1);
  int q1, q2;
  cin >> q1 >> q2;
  cout << sum(0, n - 1, 1, q1, q2) << "\n";
  cin >> q1 >> q2;
  update(0, n - 1, 1, q1, q2);
  cin >> q1 >> q2;
  cout << sum(0, n - 1, 1, q1, q2);
  return 0;
}