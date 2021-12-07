#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1e9 + 7;
const ll c = 1e12 + 1;
using namespace std;
int main()
{
    ll sum = 0;
    ll n;
    cin >> n;
    sum = (((n + 2) * (n + 1)) / 2) % MOD;
    // for (ll i = 1; i <= n; i++)
    // {
    //     for (ll j = i; j <= n; j += i)
    //     {

    //         (sum += i) %= MOD;
    //     }
    // }
    cout << sum << "\n";
    return 0;
}