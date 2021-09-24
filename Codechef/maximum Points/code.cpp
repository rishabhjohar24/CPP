#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll a, ll b, ll c, ll x, ll y, ll z)
{
    vector<int> val(60, 0), wt(60, 0);
    for (int i = 0; i < 60; i++)
    {
        if (i < 20)
        {
            wt[i] = a;
            val[i] = x;
        }
        else if (i >= 20 && i < 40)
        {
            wt[i] = b;
            val[i] = y;
        }
        else
        {
            wt[i] = c;
            val[i] = z;
        }
    }
    vector<vector<int>> dp(61, vector<int>(241, 0));
    for (int i = 1; i <= 60; i++)
    {
        for (int j = 1; j <= 240; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[60][240];
}
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll a, b, c, x, y, z;
        cin >> a >> b >> c >> x >> y >> z;
        cout << solve(a, b, c, x, y, z) << "\n";
    }
    return 0;
}