#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.')
            {
                if (i > 0)
                {
                    (dp[i][j] += dp[i - 1][j]) %= MOD;
                }
                if (j > 0)
                {
                    (dp[i][j] += dp[i][j - 1]) %= MOD;
                }
            }
        }
    }
    cout << dp[n - 1][m - 1];
    return 0;
}