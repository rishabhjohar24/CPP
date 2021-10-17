#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll a, b, rem = 0, arem = 1, flag = 0;
        ;
        map<int, int> mp;
        cin >> a >> b;
        for (ll i = 1; i <= 10000; i++)
        {
            rem = b % a;
            arem *= rem;
            arem %= a;
            if (arem == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}