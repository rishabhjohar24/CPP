#include <bits/stdc++.h>
using namespace std;
int solve(int n, int m)
{
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 1e9));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == j)
            {
                dp[i][j] = 0;
            }
            else
            {
                for (int k = 1; k < i; k++)
                {
                    dp[i][j] = min(dp[i][j], dp[i - k][j] + 1 + dp[k][j]);
                }
                for (int k = 1; k < j; k++)
                {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
                }
            }
        }
    }
    return dp[n][m];
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << solve(n, m);
    return 0;
}