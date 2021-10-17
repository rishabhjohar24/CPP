#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a;
        cin >> n;
        vector<pair<int, int>> arr(n), ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr[i] = {a, i};
        }
        sort(arr.begin(), arr.end());
        a = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first > a)
            {
                ans[i] = {arr[i].second, a};
                a++;
            }
            else if (arr[i].first == a)
            {
                ans[i] = {arr[i].second, a};
            }
        }
        sort(ans.begin(), ans.end());
        for (auto i : ans)
        {
            cout << i.second << " ";
        }
        cout << "\n";
    }
    return 0;
}