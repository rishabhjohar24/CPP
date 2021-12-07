#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long n, len, q, sz;
  cin >> n >> q;
  vector<long> arr(n);
  for (long i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  len = log2(n) + 1;
  vector<vector<int>> st(n, vector<int>(len, 0));
  for (int i = 0; i < n; i++)
  {
    st[i][0] = arr[i];
  }
  for (int j = 1; j < len; j++)
  {
    for (int i = 0; i + (1 << j) <= n; i++)
    {
      st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
    }
  }
  while (q--)
  {
    int a, b, p;
    cin >> a >> b;
    a--, b--;
    p = log2(b - a + 1);
    cout << min(st[a][p], st[b - (1 << p) + 1][p]) << endl;
  }
  return 0;
}