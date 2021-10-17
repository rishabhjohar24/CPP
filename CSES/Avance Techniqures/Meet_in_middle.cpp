#include <bits/stdc++.h>
using namespace std;
int solve(int n, vector<int> arr, int sum, int j)
{
    if (sum == 0)
    {
        return 1;
    }
    if (sum < 0 || j == n)
    {
        return 0;
    }
    if (sum > 0 && j == n)
    {
        return 0;
    }
    int ans = 0;
    for (int i = j; i < n; i++)
    {
        ans += solve(n, arr, sum - arr[i], i + 1);
    }
    return ans;
}
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(n, arr, x, 0) << "\n";
    return 0;
}