#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q, k;
  cin >> n;
  k = log2(n) + 1;
  vector<int> arr(n);
  vector<vector<int>> parse(n, vector<int>(k, 0));
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    parse[i][0] = arr[i];
  }
  cin >> q;
  for (int j = 1; j < k; j++)
  {
    for (int i = 0; i + (1 << j) <= n; i++)
    {
      parse[i][j] = min(parse[i][j - 1], parse[i + (1 << (j - 1))][j - 1]);
    }
  }
  while (q--)
  {
    int a, b, j;
    cin >> a >> b;
    a--, b--;
    j = log2(b - a + 1);
    cout << min(parse[a][j], parse[b - (1 << j) + 1][j]) << endl;
  }
  return 0;
}