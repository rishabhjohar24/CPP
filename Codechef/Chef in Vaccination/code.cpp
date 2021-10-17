#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, p, x, y, ans = 0, val;
        cin >> n >> p >> x >> y;
        for (ll i = 1; i <= n; i++)
        {
            cin >> val;
            if (i <= p)
            {
                ans += (val) ? y : x;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}