#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (!n)
        {
            cout << 1;
        }
        else if (n == 1 || n == 2)
        {
            cout << "2";
        }
        else
        {
            int ans = 1;
            while (2 * ans <= n)
            {
                ans *= 2;
            }
            if (ans == n)
            {
                cout << n;
            }
            else if (n == (2 * ans - 1))
            {
                cout << n + 1;
            }
            else
            {
                cout << ans;
            }
        }
        cout << "\n";
    }
    return 0;
}