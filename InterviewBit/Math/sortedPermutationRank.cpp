#include <bits/stdc++.h>
using namespace std;
#define MAX_CHAR 256
vector<int> fact(int n)
{
  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  dp[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    (dp[i] = i * dp[i - 1]) %= 1000003;
  }
  return dp;
}
int find(string s)
{
  int rank = 0;
  int n = s.size();
  vector<int> dp = fact(n);
  for (int i = 0; i < n - 1; i++)
  {
    int count = 0;
    for (int j = i + 1; j < n; j++)
    {
      if (s[j] < s[i])
      {
        count++;
      }
    }
    (rank += count * dp[n - i - 1]) %= 1000003;
  }
  return rank + 1;
}
int main()
{
  string s;
  cin >> s;
  cout << find(s);
  return 0;
}