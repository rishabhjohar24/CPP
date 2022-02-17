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
    tree[v] = tree[a] + tree[b];
  }
  return;
}
int query(int l, int r, int v, int x)
{
  if (l == r)
  {
    return l;
  }
  int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
  return (tree[a] >= x) ? query(l, mid, a, x) : query(mid + 1, r, b, x - tree[a]);
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, x, q;
  cin >> n >> q;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  while (q--)
  {
    cin >> x;
    cout << query(0, n - 1, 1, x) << "\n";
  }
  return 0;
}