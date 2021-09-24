#include <bits/stdc++.h>
using namespace std;
int removal(vector<int> a, vector<vector<int>> &dp, int k, int left, int right)
{
    if (left >= right)
    {
        return 0;
    }
    if (a[right] - a[left] <= k)
    {
        return 0;
    }
    if (dp[left][right] != -1)
    {
        return dp[left][right];
    }
    else
    {
        dp[left][right] = 1 + min(removal(a, dp, k, left + 1, right), removal(a, dp, k, left, right - 1));
    }
    return dp[left][right];
}
// int removal(vector<int> a, int n, int k, int left, int right)
// {
//     if (left > right)
//     {
//         return 0;
//     }
//     if (a[right] - a[left] <= k)
//     {
//         return 0;
//     }
//     return 1 + min(removal(a, n, k, left + 1, right), removal(a, n, k, left, right - 1));
// }
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    vector<vector<int>> dp(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << removal(arr, dp, k, 0, n - 1);
    return 0;
}