#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int r, in = 0, e = 0, d = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> r;
            if (!r)
            {
                d++;
            }
            else if (r == 1)
            {
                in++;
            }
            else
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
    return 0;
}