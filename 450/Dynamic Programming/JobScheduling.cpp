#include <bits/stdc++.h>
using namespace std;
struct job
{
    int start;
    int end;
    int profit;
};
bool comparator(job A, job B)
{
    return A.end < B.end;
}
int main()
{
    int n;
    cin >> n;
    vector<job> arr(n, {0, 0, 0});
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].start >> arr[i].end >> arr[i].profit;
    }
    sort(arr.begin(), arr.end(), comparator);
    vector<int> dp(n, 0);
    dp[0] = arr[0].profit;
    for (int i = 1; i < n; i++)
    {
        int incl = arr[i].profit;
        for (int j = 0; j < i; j++)
        {
            if (arr[i].start <= arr[j].end)
            {
                dp[i] = max(incl + arr[j].profit, dp[i - 1]);
                break;
            }
        }
    }
    cout << dp[n - 1];
    return 0;
}