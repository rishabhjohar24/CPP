#include <bits/stdc++.h>
using namespace std;
void solve(int n, vector<int> arr, set<int> &s, int val, int j)
{
    if (j >= n)
    {
        return;
    }
    s.insert(val);
    solve(n, arr, s, val + arr[j + 1], j + 1);
    solve(n, arr, s, val, j + 1);
}
void solveDP(int n, vector<int> arr, set<int> &s)
{
    int sum = 0;
    for (auto i : arr)
    {
        sum += i;
    }
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - arr[i - 1] >= 0 && dp[i - 1][j - arr[i - 1]])
            {
                dp[i][j] = true;
            }
            if (dp[n][j] && j > 0)
            {
                s.insert(j);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        solve(n, arr, s, arr[i], i);
    }
    cout << s.size() << "\n";
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}