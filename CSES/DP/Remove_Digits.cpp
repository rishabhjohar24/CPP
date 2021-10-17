#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll solve(ll x)
{
    vector<ll> dp(x + 1, INT_MAX);
    dp[0] = 0;
    for (ll i = 0; i <= x; i++)
    {
        for (auto j : to_string(i))
        {
            dp[i] = min(dp[i - j + '0'] + 1, dp[i]);
        }
    }
    return dp[x];
}
int main()
{
    ll num;
    cin >> num;
    cout << solve(num) << "\n";
    return 0;
}