#include <bits/stdc++.h>
using namespace std;
int cps(int n, string x, int i, int j, vector<vector<int>> &dp)
{
    if (i > j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return 1;
    }
    if (i == j)
    {
        return 1;
    }
    if (x[i] == x[j])
    {
        return dp[i][j] = cps(n, x, i + 1, j, dp) + cps(n, x, i, j - 1, dp) + 1;
    }
    return dp[i][j] = cps(n, x, i + 1, j, dp) + cps(n, x, i, j - 1, dp) - cps(n, x, i + 1, j - 1, dp);
}
int main()
{
    int n;
    string s, rev;
    cin >> s;
    n = s.size();
    rev = s;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    reverse(rev.begin(), rev.end());
    cout << cps(n, s, 0, n - 1);
    return 0;
}