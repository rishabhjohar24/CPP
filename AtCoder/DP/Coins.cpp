#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<double> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<double>> dp(n + 1, vector<double>(n + 1, 0));
    dp[1][0] = 1.0 - arr[0];
    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][0] * (1.0 - arr[i - 1]);
    }
    dp[1][1] = arr[0];
    for (int i = 2; i <= n; i++)
    {
        dp[i][i] = dp[i - 1][i - 1] * arr[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            dp[i][j] = dp[i - 1][j - 1] * arr[i - 1] + dp[i - 1][j] * (1.0 - arr[i - 1]);
        }
    }
    double ans = 0;
    for (int i = n / 2 + 1; i <= n; i++)
    {
        ans += dp[n][i];
    }
    cout << setprecision(10) << ans << endl;
    return 0;
}