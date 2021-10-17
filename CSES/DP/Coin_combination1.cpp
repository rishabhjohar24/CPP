#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll solve(ll n, ll x, vector<ll> arr)
{
    vector<ll> dp(x + 1, 0);
    dp[0] = 1;
    for (ll i = 0; i <= x; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (i - arr[j] >= 0)
            {
                dp[i] += dp[i - arr[j]] % MOD;
            }
        }
    }
    for (auto i : dp)
    {
        cout << i << " ";
    }
    cout << "\n";
    return dp[x] % MOD;
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
    cout << solve(n, x, arr) << "\n";
    return 0;
}