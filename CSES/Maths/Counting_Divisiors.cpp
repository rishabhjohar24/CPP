#include <bits/stdc++.h>
#define ll long long
const ll C = 1e6 + 1;
using namespace std;
int main()
{
    vector<ll> v(C, 0);
    for (ll i = 1; i < C; i++)
    {
        for (ll j = i; j < C; j += i)
        {
            v[j]++;
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << v[n] << "\n";
    }
    return 0;
}