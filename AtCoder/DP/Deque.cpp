#include <bits/stdc++.h>
#define ll long long
#define vv(k) vector<vector<k>>
#define v(k) vector<k>
using namespace std;
v(ll) arr(3001, 0);
vv(ll) dp(3001, v(ll)(3001, 0));
ll solve(int i, int j)
{
    if (dp[i][j])
    {
        return dp[i][j];
    }
    if (i == j)
    {
        return arr[i];
    }
    return dp[i][j] = max(arr[i] - solve(i + 1, j), arr[j] - solve(i, j - 1));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(0, n - 1);
    return 0;
}