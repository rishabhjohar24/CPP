#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll sz = 1e7;
struct Node
{
  ll sum, pref, suff, ans;
};
vector<Node> tree(sz);
Node combine(Node l, Node r)
{
  Node res;
  res.sum = l.sum + r.sum;
  res.pref = max(l.pref, l.sum + r.pref);
  res.suff = max(r.suff, r.sum + l.suff);
  res.ans = max(max(l.ans, r.ans), l.suff + r.pref);
  return res;
}
Node make_data(ll val)
{
  Node res;
  res.sum = res.pref = res.suff = res.ans = val;
  return res;
}
void build(ll l, ll r, ll v, vector<ll> &arr)
{
  if (l == r)
  {
    tree[v] = make_data(arr[l]);
  }
  else
  {
    ll mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    build(l, mid, a, arr);
    build(mid + 1, r, b, arr);
    tree[v] = combine(tree[a], tree[b]);
  }
  return;
}
void update(ll l, ll r, ll v, ll pos, ll val)
{
  if (l == r)
  {
    tree[v] = make_data(val);
  }
  else
  {
    ll mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
    (pos <= mid) ? update(l, mid, a, pos, val) : update(mid + 1, r, b, pos, val);
    tree[v] = combine(tree[a], tree[b]);
  }
  return;
}
Node query(ll l, ll r, ll v, ll q1, ll q2)
{
  if (q1 > q2)
  {
    return make_data(0);
  }
  if (l >= q1 && r <= q2)
  {
    return tree[v];
  }
  ll mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
  return combine(query(l, mid, a, q1, min(q2, mid)), query(mid + 1, r, b, max(q1, mid + 1), q2));
}
int main()
{
  ios::sync_with_stdio(0), cin.tie(0);
  ll n, q;
  cin >> n;
  vector<ll> arr(n, 0);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cin >> q;
  build(0, n - 1, 1, arr);
  while (q--)
  {
    ll x, y;
    cin >> x >> y;
    cout << query(0, n - 1, 1, x - 1, y - 1).ans << "\n";
  }
  return 0;
}
    #include <cstdio>
    #include <cstring>
     
    int lazy[2000000];
     
    int update(int head, int left, int right, int upleft, int upright, int upval)
    {
        if (upleft==left&&upright==right)
        {
            lazy[head]=upval;
            return upval;
        }
        int mid=(left+right)/2;
        if (lazy[head]!=0)
        {
            update(head*2, left, mid, left, mid, lazy[head]);
            update(head*2+1, mid+1, right, mid+1, right, lazy[head]);
            lazy[head]=0;
        }
        if (upright<=mid)
            update(head*2, left, mid, upleft, upright, upval);
        else if (mid<upleft)
            update(head*2+1, mid+1, right, upleft, upright, upval);
        else
        {
            update(head*2, left, mid, upleft, mid, upval);
            update(head*2+1, mid+1, right, mid+1, upright, upval);
        }
        return 0;
    }
     
    int query(int head, int left, int right, int qpos)
    {
        if (left==right)
            return lazy[head];
        if (lazy[head]!=0)
            return lazy[head];
        int mid=(left+right)/2;
        if (qpos<=mid)
            return query(head*2, left, mid, qpos);
        else
            return query(head*2+1, mid+1, right, qpos);
    }
     
    int n, m;
    int matchl[300010], matchr[300010], matchx[300010];
     
    int main()
    {
        scanf("%d%d\n", &n, &m);
        for (int i=1; i<=m; i++)
            scanf("%d%d%d", &matchl[i], &matchr[i], &matchx[i]);
        memset(lazy, 0, sizeof(lazy));
        for (int i=m; i; i--)
        {
            int temp=query(1, 1, n, matchx[i]);
            update(1, 1, n, matchl[i], matchr[i], matchx[i]);
            update(1, 1, n, matchx[i], matchx[i], temp);
        }
        for (int i=1; i<=n; i++)
        {
            int temp=query(1, 1, n, i);
            printf("%d", temp);
            if (i==n)
                printf("\n");
            else
                printf(" ");
        }
        return 0;
    }