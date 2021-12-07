#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1e9 + 7;
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, m, ans = 1;
        cin >> n >> m;
        while (m)
        {
            if (m & 1)
            {
                (ans *= n) %= MOD;
            }
            (n *= n) %= MOD;
            m >>= 1;
        }
        cout << ans << "\n";
    }
    return 0;
}