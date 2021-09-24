#include <bits/stdc++.h>
using namespace std;
bool comp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first == b.first)
    {
        return (a.second > b.second);
    }
    return (a.first < b.first);
}
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<pair<string, int>> arr(n, {"", 0});
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
        mp[arr[i].second] = i + 1;
    }
    sort(arr.begin(), arr.end(), comp);
    for (int i = 0; i < n; i++)
    {
        cout << mp[arr[i].second] << "\n";
    }
    return 0;
}