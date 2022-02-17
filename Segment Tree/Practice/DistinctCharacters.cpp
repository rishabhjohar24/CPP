#include <bits/stdc++.h>
using namespace std;
const int sz = (int(1e5) << 2) + 5;
int tree[sz];
void build(int l, int r, int v, string s)
{
  if (l == r)
  {
    tree[v] = 1 << (s[l] - 'a');
  }
  else
  {
    int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    build(l, mid, a, s);
    build(mid + 1, r, b, s);
    tree[v] = tree[a] | tree[b];
  }
  return;
}
void update(int l, int r, int v, int pos, char val)
{
  if (l == r)
  {
    tree[v] = 1 << val - 'a';
  }
  else
  {
    int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    pos <= mid ? update(l, mid, a, pos, val) : update(mid + 1, r, b, pos, val);
    tree[v] = tree[a] | tree[b];
  }
  return;
}
int query(int l, int r, int v, int q1, int q2)
{
  if (l > q2 || r < q1)
  {
    return 0;
  }
  if (l >= q1 && r <= q2)
  {
    return tree[v];
  }
  int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
  return query(l, mid, a, q1, min(mid, q2)) | query(mid + 1, r, b, max(q1, mid + 1), q2);
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  char val;
  int q, a, b, n = s.size(), pos;
  build(0, n - 1, 1, s);
  cin >> q;
  while (q--)
  {
    cin >> a;
    if (a == 1)
    {
      cin >> pos >> val;
      update(0, n - 1, 1, pos - 1, val);
    }
    else
    {
      cin >> a >> b;
      a = query(0, n - 1, 1, a - 1, b - 1);
      b = 0;
      while (a)
      {
        b += (a & 1) ? 1 : 0;
        a >>= 1;
      }
      cout << b << "\n";
    }
  }
  return 0;
}