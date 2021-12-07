#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, n;
    cin >> n >> p;
    vector<int> arr(n), dp(p + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i < arr[j - 1])
            {
                continue;
            }
            if (!dp[i - arr[j - 1]])
            {
                dp[i] = 1;
            }
        }
    }
    cout << (dp[p] ? "First" : "Second") << endl;
    return 0;
}