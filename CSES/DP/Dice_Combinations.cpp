#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll solveDP(ll n)
{
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= 6; j++)
        {
            if (i - j >= 0)
            {
                dp[i] += (dp[i - j] % MOD);
            }
        }
    }
    return dp[n] % MOD;
}
int main()
{
    ll n;
    cin >> n;
    cout << solveDP(n);
    return 0;
}