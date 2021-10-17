#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr, int n)
{
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = n - 1; i >= 0; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                dp[i][j] = arr[i];
            }
            else
            {
                dp[i][j] = max(arr[i] - dp[i + 1][j], arr[j] - dp[i][j - 1]);
            }
        }
    }
}
int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(arr, n);
    return 0;
}