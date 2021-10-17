#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;
        if (a + b + c <= d)
        {
            cout << "1\n";
        }
        else if (a + b <= d)
        {
            cout << "2\n";
        }
        else if (b + c <= d)
        {
            cout << "2\n";
        }
        else if (c + a <= d)
        {
            cout << "2\n";
        }
        else
        {
            cout << "3\n";
        }
    }
    return 0;
}