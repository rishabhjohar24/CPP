#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1e9 + 7;
using namespace std;
ll expo(ll a, ll b, ll MOD)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            (ans *= a) %= MOD;
        }
        (a *= a) %= MOD;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll k = expo(b, c, MOD - 1);
        cout << expo(a, k, MOD) << "\n";
    }
    return 0;
}