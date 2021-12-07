#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int r, in = 0, e = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> r;
        if (r == 1)
        {
            in++;
        }
        else if (r == 2)
        {
            e++;
        }
    }
    if (in > e)
    {
        cout << "INDIA\n";
    }
    else if (in < e)
    {
        cout << "ENGLAND\n";
    }
    else
    {
        cout << "DRAW\n";
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}