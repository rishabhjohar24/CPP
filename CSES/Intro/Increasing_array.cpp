#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans = 0;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0 && arr[i - 1] > arr[i])
        {
            ans += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << ans << endl;
    return 0;
}