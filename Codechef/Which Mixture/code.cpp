#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > 0 && b > 0)
        {
            cout << "Solution\n";
        }
        else if (!b)
        {
            cout << "Solid\n";
        }
        else
        {
            cout << "Liquid\n";
        }
    }
    return 0;
}