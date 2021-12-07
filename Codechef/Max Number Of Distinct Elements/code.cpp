#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a;
    cin >> n;
    vector<pair<int, int>> array(n), result(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        array[i] = {a, i};
    }
    sort(array.begin(), array.end());
    a = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i].first > a)
        {
            result[i] = {array[i].second, a};
            a++;
        }
        else if (array[i].first == a)
        {
            result[i] = {array[i].second, a};
        }
    }
    sort(result.begin(), result.end());
    for (auto i : result)
    {
        cout << i.second << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
        cout << "\n";
    }
    return 0;
}