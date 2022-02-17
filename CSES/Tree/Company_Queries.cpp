#include <bits/stdc++.h>
using namespace std;
int lift[200001][21];
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  // ifstream in("x.txt");
  // ofstream out("y.txt");
  int n, q, a, b;
  cin >> n >> q;
  for (int i = 2; i <= n; i++)
  {
    cin >> lift[i][0];
  }
  for (int j = 1; (1 << j) <= n; j++)
  {
    for (int i = 0; i <= n; i++)
    {
      lift[i][j] = lift[lift[i][j - 1]][j - 1];
    }
  }
  while (q--)
  {
    cin >> a >> b;
    for (int i = 0; (1 << i) <= n; i++)
    {
      if (b & (1 << i))
      {
        a = lift[a][i];
      }
    }
    a ? cout << a << "\n" : cout << "-1\n";
  }
  return 0;
}