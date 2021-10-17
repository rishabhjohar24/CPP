#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int solve(int n, int m, vector<int> arr, int i)
{
    vector<vector<int>> dp(n, vector<int>(m + 1, 0));
    if (!arr[0])
    {
        fill(dp[0].begin(), dp[0].end(), 1);
    }
    else
    {
        dp[0][arr[0]] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (!arr[i])
        {
            for (int j = 1; j <= m; j++)
            {
                for (int k : {j - 1, j, j + 1})
                {
                    if (k >= 1 && k <= m)
                    {
                        (dp[i][j] += dp[i - 1][k]) %= MOD;
                    }
                }
            }
        }
        else
        {
            for (int k : {arr[i] - 1, arr[i], arr[i] + 1})
            {
                if (k >= 1 && k <= m)
                {
                    (dp[i][arr[i]] += dp[i - 1][k]) %= MOD;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        (ans += dp[n - 1][i]) %= MOD;
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(n, m, arr, 0);
    return 0;
}