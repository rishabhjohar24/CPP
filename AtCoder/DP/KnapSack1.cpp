#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, w;
    cin >> n >> w;
    vector<ll> wt(n), val(n);
    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1, 0));
    for (ll i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= w; j++)
        {

            if (j >= wt[i - 1])
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][w] << "\n";
    return 0;
}