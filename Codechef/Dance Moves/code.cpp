#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, ans = 0;
        cin >> x >> y;
        if (x > y)
        {
            ans = x - y;
        }
        else
        {
            float p = y - x;
            ans = (int)p % 2 ? ceil(p / 2) + 1 : p / 2;
        }
        cout << ans << endl;
    }
    return 0;
}