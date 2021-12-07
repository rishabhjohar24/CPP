#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> parse;
int query(int l, int r)
{
  l = min(l, r);
  r = max(l, r);
  int p = log2(r - l + 1);
  return max(parse[l][p], parse[r + 1 - (1 << p)][p]);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q, k;
  cin >> n >> q;
  k = log2(n) + 1;
  parse.resize(n, vector<int>(k, 0));
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    parse[i][0] = arr[i];
  }
  for (int j = 1; j <= k; j++)
  {
    for (int i = 0; i + (1 << j) <= n; i++)
    {
      parse[i][j] = max(parse[i][j - 1], parse[i + (1 << (j - 1))][j - 1]);
    }
  }
  int count = 0;
  while (q--)
  {
    int a, b, j, x;
    cin >> a >> b;
    a--, b--;
    if (a + 1 == b)
    {
      count++;
    }
    count += (query(a + 1, b - 1) <= arr[a]) ? 1 : 0;
  }
  cout << count << endl;
  return 0;
}