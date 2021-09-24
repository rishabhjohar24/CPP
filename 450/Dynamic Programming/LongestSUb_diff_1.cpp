#include <bits/stdc++.h>
using namespace std;
int longestDiff(int arr[], int n)
{
    vector<int> t(n + 1, 1);
    int lmax = 1, gmax = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (abs(arr[i] - arr[j]) == 1 && t[i] < t[j] + 1)
            {
                t[i] = t[j] + 1;
            }
        }
        gmax = max(t[i], gmax);
    }
    return gmax;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << longestDiff(arr, n);
    return 0;
}