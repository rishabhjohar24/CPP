#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> pages, vector<int> price, int n, int x)
{
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j - price[i - 1] >= 0)
            {
                dp[i][j] = max(pages[i - 1] + dp[i - 1][j - price[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][x];
}
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> price(n, 0), pages(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }
    cout << solve(pages, price, n, x) << "\n";
    return 0;
}