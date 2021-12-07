#include <bits/stdc++.h>
using namespace std;
int moves(int a, int i, int &ans)
{
  if (!a)
  {
    ans = min(i, ans);
    return ans;
  }
  return min(moves(a - i, i + 1, ans), moves(a + i, i + 1, ans));
}
int main()
{
  int n, ans = INT_MAX;
  cin >> n;
  cout << moves(n, 1, ans);
  return 0;
}