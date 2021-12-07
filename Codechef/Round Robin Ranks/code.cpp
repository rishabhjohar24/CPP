#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, k;
        cin >> n >> k;
        cout << (((2 * n) - k - 1) / 2) * 2 << "\n";
    }
    return 0;
}