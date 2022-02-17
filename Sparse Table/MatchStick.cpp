#include <bits/stdc++.h>
using namespace std;
int row = 1e5 + 5, col = 21;
vector<vector<double>> rmnq(row, vector<double>(col, 0)), rmxq(row, vector<double>(col, 0));
double queryMin(int l, int r, int m)
{
  double val = INT_MAX;
  for (int j = m; j >= 0; j--)
  {
    if ((1 << j) <= r - l + 1)
    {
      val = min(rmnq[l][j], val);
      l += (1 << j);
    }
  }
  return val;
}
double queryMax(int l, int r, int m)
{
  double val = INT_MIN;
  for (int j = m; j >= 0; j--)
  {
    if ((1 << j) <= r - l + 1)
    {
      val = max(rmxq[l][j], val);
      l += (1 << j);
    }
  }
  return val;
}
int main()
{
  double n, m, q, l, r, x;
  cin >> n;
  m = log2(n) + 1;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    rmnq[i][0] = x, rmxq[i][0] = x;
  }
  for (int j = 1; (1 << j) <= n; j++)
  {
    for (int i = 0; i + (1 << j) <= n; i++)
    {
      rmnq[i][j] = min(rmnq[i][j - 1], rmnq[i + (1 << (j - 1))][j - 1]);
      rmxq[i][j] = max(rmxq[i][j - 1], rmxq[i + (1 << (j - 1))][j - 1]);
    }
  }
  cout << setprecision(1) << fixed;
  cin >> q;
  while (q--)
  {
    cin >> l >> r;
    double minInLtoR = queryMin(l, r, m);
    double maxInZeroToL = l ? queryMax(0, l - 1, m) : -1;
    double maxInRToN = r + 1 < n ? queryMax(r + 1, n - 1, m) : -1;
    double maxInLtoR = queryMax(l, r, m);
    double ans = minInLtoR + max({maxInRToN, maxInZeroToL, (maxInLtoR - minInLtoR) / 2});
    cout << ans << "\n";
  }
  return 0;
}