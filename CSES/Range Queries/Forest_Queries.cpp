#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, q;
  cin >> n >> q;
  vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0)), dp(n + 1, vector<int>(n + 1, 0));
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      char x;
      cin >> x;
      arr[i][j] = (x == '.') ? 0 : 1;
    }
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i][j];
    }
  }

  while (q--)
  {
    int x1, y1, x2, y2, ans = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << dp[x2][y2] - dp[x2][y1 - 1] - dp[x1 - 1][y2] + dp[x1 - 1][y1 - 1] << "\n";
  }
  return 0;
}
// const int sz = 10001;
// vector<vector<int>> tree(1001, vector<int>(sz, 0));
// void build(int l, int r, int v, int row, vector<vector<char>> &arr)
// {
//   if (l == r)
//   {
//     tree[row][v] = (arr[row][l] == '*') ? 1 : 0;
//   }
//   else
//   {
//     int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
//     build(l, mid, a, row, arr);
//     build(mid + 1, r, b, row, arr);
//     tree[row][v] = tree[row][a] + tree[row][b];
//   }
//   return;
// }
// int query(int l, int r, int v, int q1, int q2, int row)
// {
//   if (q1 > q2)
//   {
//     return 0;
//   }
//   if (l >= q1 && r <= q2)
//   {
//     return tree[row][v];
//   }
//   int mid = (l + r) >> 1, a = v << 1, b = v << 1 | 1;
//   return query(l, mid, a, q1, min(q2, mid), row) + query(mid + 1, r, b, max(q1, mid + 1), q2, row);
// }
// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   ofstream out("y.txt");
//   ifstream in("x.txt");
//   int n, q;
//   in >> n >> q;
//   vector<vector<char>> arr(n, vector<char>(n, '.'));
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       in >> arr[i][j];
//     }
//     build(0, n - 1, 1, i, arr);
//   }
//   while (q--)
//   {
//     int x1, y1, x2, y2, ans = 0;
//     in >> y1 >> x1 >> y2 >> x2;
//     for (int i = y1; i <= y2; i++)
//     {
//       ans += query(0, n - 1, 1, x1 - 1, x2 - 1, i - 1);
//     }
//     out << ans << "\n";
//   }
//   return 0;
// }