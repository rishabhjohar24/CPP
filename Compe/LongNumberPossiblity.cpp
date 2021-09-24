#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = INT_MAX, carry = 0;
    cin >> n;
    vector<int> arr(n, 0), brr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            brr[i] = arr[i] + 1;
            carry = brr[i] / 10;
            brr[i] %= 10;
        }
        else
        {
            brr[i] = arr[i] + carry;
            carry = brr[i] / 10;
            brr[i] %= 10;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == brr[i])
        {
            ans = i + 2;
            break;
        }
    }
    (ans == INT_MAX) ? cout << 0 : cout << ans;
    return 0;
}