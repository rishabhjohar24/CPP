#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        unsigned long long x, k;
        cin >> x >> k;
        cout << 2 * x << " " << (x * k) * (x * k - 1) << "\n";
    }
    return 0;
}