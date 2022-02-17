#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int row = 1e5 + 7, col = 21;
vector<vector<ll>> sparse(row, vector<ll>(col, 0));
vector<int> pq(row, 0);
ll query(int l, int r, int n)
{
  int x = pq[r - l + 1];
  return __gcd(sparse[l][x], sparse[r - (1 << x) + 1][x]);
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q, x;
  map<ll, ll> mp;
  cin >> n;
  for (int i = 2; i <= n; i++)
  {
    pq[i] = pq[i >> 1] + 1;
  }
  for (int i = 0; i < n; i++)
  {
    cin >> sparse[i][0];
  }
  for (int j = 1; (1 << j) <= n; j++)
  {
    for (int i = 0; i + (1 << j) <= n; i++)
    {
      sparse[i][j] = __gcd(sparse[i][j - 1], sparse[i + (1 << (j - 1))][j - 1]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    int leftStartingIdx = i;
    while (leftStartingIdx < n)
    {
      ll val = query(i, leftStartingIdx, n);
      int l = leftStartingIdx, r = n - 1, ans = leftStartingIdx;
      while (l < r)
      {
        int mid = (l + r) >> 1;
        if (val == query(l, mid, n))
        {
          l = mid + 1;
          ans = mid;
        }
        else
        {
          r = mid - 1;
        }
      }
      mp[val] += ans - leftStartingIdx + 1;
      leftStartingIdx = ans + 1;
    }
  }
  cin >> q;
  while (q--)
  {
    cin >> x;
    cout << mp[x] << "\n";
  }
  return 0;
}
