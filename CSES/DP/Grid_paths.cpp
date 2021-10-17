#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll solve(ll n, ll i, ll j, vector<vector<char>> arr)
{
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    dp[0][0] = 1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
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
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return dp[n - 1][n - 1];
}
int main()
{
    ll n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n, '.'));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << solve(n, 0, 0, arr) << "\n";
    return 0;
}