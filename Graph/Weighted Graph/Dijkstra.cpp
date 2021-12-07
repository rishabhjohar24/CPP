#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll sz = 1e6 + 1;
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
vector<ll> level(sz, INT64_MAX);
vector<pair<ll, ll>> adj[sz];
int main()
{
    ll n, m, a, b, c;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back({b, 0});
        adj[b].push_back({a, 1});
    }
    q.push({1, 0});
    level[0] = 0;
    while (!q.empty())
    {
        auto x = q.top();
        q.pop();
        for (auto i : adj[x.first])
        {
            if (level[i.first] > x.second + i.second)
            {
                level[i.first] = x.second + i.second;
                q.push({i.first, level[i.first]});
            }
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << level[i] << " ";
    }
    cout << "\n";
    return 0;
}