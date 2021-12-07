#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(vector<vector<int>> arr)
{
    int n = arr.size(), ans = INT_MAX;
    vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(n, {INT_MAX, 0}));
    for (int i = 0; i < n; i++)
    {
        dp[0][i] = {arr[0][i], i};
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (dp[i - 1][j].second != k && dp[i][j].first > dp[i - 1][j].first + arr[i][k])
                {
                    dp[i][j] = {dp[i - 1][j].first + arr[i][k], k};
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, dp[n - 1][i].first);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << solve(arr);
    return 0;
}