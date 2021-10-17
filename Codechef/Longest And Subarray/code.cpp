#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, n_;
        cin >> n;
        n_ = pow(2, (int)log2(n));
        (n_ / 2 > n - n_ + 1) ? cout << n_ / 2 : cout << n - n_ + 1;
        cout << endl;
    }
    return 0;
}