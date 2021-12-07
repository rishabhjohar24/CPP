#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n), dp(n, INT_MAX);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= i + k; j++)
        {
            if (j < n)
            {
                dp[j] = min(abs(arr[i] - arr[j]) + dp[i], dp[j]);
            }
        }
    }
    cout << dp[n - 1];
    return 0;
}