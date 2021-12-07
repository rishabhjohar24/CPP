#include <bits/stdc++.h>
#define ll long long
const ll c = 1e6 + 1;
using namespace std;
int main()
{
    int n;
    vector<int> v(c, 0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v[x]++;
    }
    for (ll i = c; i >= 0; i--)
    {
        ll count = 0;
        for (ll j = i; j < c; j += i)
        {
            count += v[j];
        }
        if (count > 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}