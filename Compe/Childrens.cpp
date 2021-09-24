#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, ans = INT_MIN;
    cin >> n >> k;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (n - i >= k)
        {
            ans = max(ans, arr[i]);
        }
    }
    cout << ans << endl;
    return 0;
}