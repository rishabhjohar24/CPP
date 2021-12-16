#include <bits/stdc++.h>
#define ll long long
#define pi(x, v) pair<x, v>
#define v(p) vector<p>
using namespace std;
const ll sz = 1e7;
pi(ll, ll) tree[sz];
ll middle(ll l, ll r)
{
  return (l + r) >> 1;
}
pi(ll, ll) combine(pi(ll, ll) a, pi(ll, ll) b)
{
  pi(ll, ll) ans;
  ll p = a.first, q = b.first;
  ll pidx = a.second, qidx = b.second;
  return ans = (p <= q) ? b : a;
}
void build(ll l, ll r, ll v, ll *arr)
{
  if (l == r)
  {
    tree[v] = {arr[l], l + 1};
  }
  else
  {
    ll mid = middle(l, r), a = v << 1, b = v << 1 | 1;
    build(l, mid, a, arr);
    build(mid + 1, r, b, arr);
    tree[v] = combine(tree[a], tree[b]);
  }
  return;
}
ll query(ll l, ll r, ll v, ll val)
{
  if (tree[v].first < val)
  {
    return 0;
  }
  if (l == r)
  {
    tree[v].first -= val;
    return tree[v].second;
  }
  ll mid = middle(l, r), a = v << 1, b = v << 1 | 1, idx;
  if (tree[a].first >= val)
  {
    idx = query(l, mid, a, val);
    tree[v] = combine(tree[a], tree[b]);
    return idx;
  }
  idx = query(mid + 1, r, b, val);
  tree[v] = combine(tree[a], tree[b]);
  return idx;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, q, x;
  cin >> n >> q;
  ll *arr = new ll[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  build(0, n - 1, 1, arr);
  while (q--)
  {
    cin >> x;
    cout << query(0, n - 1, 1, x) << " ";
  }
  return 0;
}
// #include <bits/stdc++.h>
// #define ll long long
// #define v(p) vector<p>
// #define pi(x, y) pair<x, y>
// using namespace std;
// const ll sz = 1e7;
// pi(ll, ll) tree[sz];
// pi(ll, ll) combine(pi(ll, ll) a, pi(ll, ll) b)
// {
//   pi(ll, ll) ans;
//   ll p = a.first, q = b.first;
//   ll pidx = a.second, qidx = b.second;
//   if (p >= q)
//   {
//     ans = {q, qidx};
//   }
//   else if (p < q)
//   {
//     ans = {p, pidx};
//   }
//   else
//   {
//     ans.first = q;
//     ans.second = (pidx > qidx) ? qidx : pidx;
//   }
//   return ans;
// }
// void build(ll l, ll r, ll v, v(ll) arr)
// {
//   if (l == r)
//   {
//     tree[v] = {arr[l], l};
//   }
//   else
//   {
//     ll mid = (l + r) >> 1;
//     build(l, mid, v << 1, arr);
//     build(mid + 1, r, v << 1 | 1, arr);
//     tree[v] = combine(tree[v << 1], tree[v << 1 | 1]);
//   }
//   return;
// }
// ll query(ll l, ll r, ll v, ll q1, ll q2, ll &mn, ll val)
// {
//   if (q1 > q2)
//   {
//     return INT_MAX;
//   }
//   if (l >= q1 && r <= q2)
//   {
//     if (tree[v].first >= val)
//     {
//       mn = min(tree[v].second, mn);
//       return tree[v].first;
//     }
//     else if (q1 == q2)
//     {
//       return INT_MAX;
//     }
//   }
//   ll mid = (l + r) >> 1;
//   return min(query(l, mid, v << 1, q1, min(mid, q2), mn, val), query(mid + 1, r, v << 1 | 1, max(q1, mid + 1), q2, mn, val));
// }
// void update(ll l, ll r, ll v, ll pos, ll val)
// {
//   if (l == r)
//   {
//     tree[v] = {val, pos};
//   }
//   else
//   {
//     ll mid = (l + r) >> 1;
//     if (pos <= mid)
//     {
//       update(l, mid, v << 1, pos, val);
//     }
//     else
//     {
//       update(mid + 1, r, v << 1 | 1, pos, val);
//     }
//     tree[v] = combine(tree[v << 1], tree[v << 1 | 1]);
//   }
//   return;
// }
// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(NULL);
//   ll n, q;
//   cin >> n >> q;
//   v(ll) arr(n);
//   for (ll i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   build(0, n - 1, 1, arr);
//   while (q--)
//   {
//     ll x, mn = INT_MAX, p, ans;
//     cin >> x;
//     p = query(0, n - 1, 1, 0, n - 1, mn, x);
//     ans = (p == INT_MAX) ? 0 : mn + 1;
//     if (p == x)
//     {
//       update(0, n - 1, 1, mn, 0);
//     }
//     else if (p - x > 0 && p != INT_MAX)
//     {
//       update(0, n - 1, 1, mn, p - x);
//     }
//     cout << ans << " ";
//   }
//   return 0;
// }