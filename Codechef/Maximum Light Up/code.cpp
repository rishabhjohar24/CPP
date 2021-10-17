#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll p, a, b, c, x, y, ans = 0;
        cin >> p >> a >> b >> c >> x >> y;
        b = b + a * x;
        c = c + a * y;
        if (b >= c)
        {
            ans = p / c;
            p %= c;
            if (p > b)
            {
                ans += p / b;
            }
        }
        else
        {
            ans = p / b;
            p %= b;
            if (p > c)
            {
                ans += p / c;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}