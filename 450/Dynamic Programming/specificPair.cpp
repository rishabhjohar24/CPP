#include <bits/stdc++.h>
using namespace std;
void pairWithSpecificDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    vector<int> sum(n, 0);
    int _max = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] < k)
        {
            _max += arr[i] + arr[i - 1];
            i++;
        }
    }
    cout << _max;
}
using namespace std;
int main()
{
    int t, k;
    cin >> t >> k;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    pairWithSpecificDiff(arr, t, k);
    return 0;
}