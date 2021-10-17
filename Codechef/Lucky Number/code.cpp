#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, flag = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a;
            if (a == 7)
            {
                flag = 1;
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}