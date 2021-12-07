#include <bits/stdc++.h>
#define ll long long
#define vv(k) vector<vector<k>>
#define v(k) vector<k>
#define cfor(i, a, b, p)        \
    for (int i = a; i < b; i++) \
    {                           \
        cin >> p[i];            \
    }
using namespace std;
const ll MOD = 1e9 + 7;
int solve(v(ll) arr, int n, int k, int p)
{
    vv(ll) dp(n + 1, v(ll)(k + 1, 0));
    for (int i = 0; i <= arr[0]; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        v(ll) pre(k + 1);
        pre[0] = dp[i - 1][0];
        for (int j = 1; j <= k; j++)
        {
            (pre[j] = pre[j - 1] + dp[i - 1][j]) %= MOD;
        }
        for (int j = 0; j <= k; j++)
        {
            if (j > arr[i])
            {
                dp[i][j] = (pre[j] + MOD - pre[j - arr[i] - 1]) % MOD;
            }
            else
            {
                dp[i][j] = pre[j];
            }
        }
    }
    return dp[n - 1][k];
}
int main()
{
    ll n, k;
    cin >> n >> k;
    v(ll) arr(n);
    cfor(i, 0, n, arr);
    cout << solve(arr, n, k, 0);
    return 0;
}