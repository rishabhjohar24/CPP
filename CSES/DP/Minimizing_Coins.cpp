#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll n, ll x, vector<ll> arr)
{
    vector<ll> dp(x + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - arr[j] >= 0)
            {
                dp[i] = min(dp[i - arr[j]] + 1, dp[i]);
            }
        }
    }
    return (dp[x] == INT_MAX) ? -1 : dp[x];
}
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(n, x, arr);
    return 0;
}