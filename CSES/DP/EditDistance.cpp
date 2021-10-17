#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int n, m;
    cin >> a >> b;
    n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (!i)
            {
                dp[i][j] = j;
            }
            else if (!j)
            {
                dp[i][j] = i;
            }
            else if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]});
            }
        }
    }
    cout << dp[n][m] << "\n";
    return 0;
}