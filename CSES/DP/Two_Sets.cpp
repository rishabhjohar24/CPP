#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int solve(int n)
{
    int sum = (n * (n + 1)) / 2;
    if (sum % 2)
    {
        return 0;
    }
    sum /= 2;
    vector<vector<int>> dp(n, vector<int>(sum + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - i >= 0)
            {
                (dp[i][j] += dp[i - 1][j - i]) %= MOD;
            }
        }
    }
    return dp[n - 1][sum];
}
int main()
{
    int n, k = 1;
    cin >> n;
    cout << solve(n);
    return 0;
}