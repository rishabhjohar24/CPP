#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, m, k, _max = INT_MIN, _min = INT_MAX;
    cin >> n >> m;
    k = n;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    vector<bool> vis(n + 1, false);
    vector<vector<ll>> adj(n + 1);
    vector<ll> andy(n + 1, 0), result(n + 1);
    for (ll i = 0, a, b; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        andy[a]++;
        andy[b]++;
    }
    for (ll i = 1; i <= n; i++)
    {
        q.push({andy[i], i});
    }
    for (ll i = 1; i <= n; i++)
    {
        while (vis[q.top().second])
        {
            q.pop();
        }
        ll par = q.top().second;
        vis[par] = true;
        result[par] = k;
        k--;
        q.pop();
        for (auto child : adj[par])
        {
            if (!vis[child])
            {
                andy[child]--;
                q.push({andy[child], child});
            }
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        ll count = 0;
        for (auto j : adj[i])
        {
            if (result[i] > result[j])
            {
                count++;
            }
        }
        _max = max(_max, count);
        _min = min(_min, count);
    }
    cout << _max - _min << "\n";
    for (ll i = 1; i <= n; i++)
    {
        cout << result[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        solve();
        cout << "\n";
    }
    return 0;
}

// int n, m, k = 1, mx = INT_MIN, mn = INT_MIN;
//         cin >> n >> m;
//         vector<pair<int, int>> in(n + 1, {0, 0}), sorty, prefinal(n + 1, {0, 0});
//         vector<int> result(n + 1);
//         vector<vector<int>> adj(n + 1);
//         for (int i = 0, a, b; i < m; i++)
//         {
//             cin >> a >> b;
//             adj[a].push_back(b);
//             andy[b] = {andy[b].first++, i};
//         }
//         sort(in.begin(), in.end());
//         queue<int> q;
//         for (int i = 1; i <= n; i++)
//         {
//             if (!andy[i].first)
//             {
//                 q.push(i);
//             }
//         }
//         while (!q.empty())
//         {
//             int a = q.front();
//             q.pop();
//             sorty.push_back({a, andy[a].second});
//             for (auto i : adj[a])
//             {
//                 andy[i].first--;
//                 if (!andy[i].first)
//                 {
//                     sorty.push_back({i, andy[i].second});
//                 }
//             }
//         }
//         for (auto i : sorty)
//         {
//             cout << i.first << " " << i.second << "\n";
//         }
// for (int i = 0; i < n; i++, k++)
// {
//     prefinal[sorty[i].first] = {sorty[i].second, k};
// }
// sort(prefinal.begin(), prefinal.end());
// for (int i = 1; i <= n; i++)
// {
//     int count = 0;
//     for (auto j : adj[i])
//     {
//         if (prefinal[i].second > prefinal[j].second)
//         {
//             count++;
//         }
//     }
//     result[i] = count;
//     mx = max(mx, count);
//     mn = min(mn, count);
// }
// cout << mx - mx << endl;
// for (auto i : result)
// {
//     cout << i << " ";
// }
// cout << endl;