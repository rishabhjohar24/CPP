#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> arr(n, 0);
    vector<vector<int>> lis(n, vector<int>(2, 1));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && lis[i][0] < lis[j][1] + 1)
            {
                lis[i][0] = lis[j][1] + 1;
            }
            if (arr[i] < arr[j] && lis[i][1] < lis[j][0] + 1)
            {
                lis[i][1] = lis[j][0] + 1;
            }
            ans = max({lis[i][0], lis[i][1], ans});
        }
    }
    cout << ans << " ";
    return 0;
}