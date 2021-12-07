#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, k, ans = 0, _ans = 0, diff, _diff;
        ll m = INT_MAX;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll left = 1, right = n - 2;
        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 3)
        {
            cout << min(arr[1] - arr[0], arr[2] - arr[1]) << endl;
            continue;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            ans += abs(arr[i] - arr[(n - 1) / 2]);
        }
        for (ll i = 1; i < n; i++)
            _ans += abs(arr[i] - arr[1 + (n - 1) / 2]);
        m = min(ans, _ans);

        while (left < right)
        {
            diff = arr[n - 1] - arr[left], _diff = arr[right] - arr[0];
            m = min(m, abs(_diff - diff));
            if (_diff < diff)
                left++;
            else
                right--;
        }
        cout << m << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// void fast()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }
// int main()
// {
//     fast();
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n, ans = INT_MAX;
//         cin >> n;
//         vector<int> arr(n), mn(n), mx(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr.begin(), arr.end());
//         if (n == 2)
//         {
//             ans = 0;
//         }
//         else if (n == 3)
//         {
//             if (abs(arr[2] - arr[1]) > abs(arr[1] - arr[0]))
//             {
//                 ans = abs(arr[1] - arr[0]);
//             }
//             else
//             {
//                 ans = abs(arr[2] - arr[1]);
//             }
//         }
//         else
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 mn[i] = abs(arr[i] - arr[0]);
//                 mx[i] = abs(arr[n - 1] - arr[i]);
//             }
//             for (int i = 0; i < n - 1; i++)
//             {
//                 ans = max(ans, abs(mx[i + 1] - mn[i]));
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }