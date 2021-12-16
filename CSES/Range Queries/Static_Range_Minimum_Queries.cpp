// Segment Tree
#include <bits/stdc++.h>
using namespace std;
const int sz = 4 * (1e6 + 1);
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
  int n, q;
  cin >> n >> q;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  while (q--)
  {
    int q1, q2;
    cin >> q1 >> q2;
    cout << query(0, n - 1, 1, q1 - 1, q2 - 1) << endl;
  }
  return 0;
}
// Sparse table
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   long n, len, q, sz;
//   cin >> n >> q;
//   vector<long> arr(n);
//   for (long i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   len = log2(n) + 1;
//   vector<vector<int>> st(n, vector<int>(len, 0));
//   for (int i = 0; i < n; i++)
//   {
//     st[i][0] = arr[i];
//   }
//   for (int j = 1; j < len; j++)
//   {
//     for (int i = 0; i + (1 << j) <= n; i++)
//     {
//       st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
//     }
//   }
//   while (q--)
//   {
//     int a, b, p;
//     cin >> a >> b;
//     a--, b--;
//     p = log2(b - a + 1);
//     cout << min(st[a][p], st[b - (1 << p) + 1][p]) << endl;
//   }
//   return 0;
// }