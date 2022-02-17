#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll var = 0;
const ll sz = 1e6 + 1, mx_sz = log2(INT64_MAX);
vector<ll> adj[sz], level(sz), par(sz), in(sz);
vector<bool> visited(sz, false);
vector<vector<ll>> pre(sz, vector<ll>(mx_sz, -1));

// helper functions

void DFS(ll);
void preProcess(ll);
ll LCA(ll, ll, ll);
ll distance(ll a, ll b, ll n, ll root)
{
    preProcess(n);
    DFS(root);
    ll lca = LCA(a, b, n);
    return level[a] + level[b] - (2 * level[lca]);
}

// driver Code:

int main()
{
    ll n, m, p, q, root;
    cin >> n >> m >> p >> q;
    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        in[b]++;
        par[b] = a;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (in[i] == 0)
        {
            root = i;
            break;
        }
    }
    cout << distance(p, q, n, root) << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= log2(n); j++)
        {
            cout << pre[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void DFS(ll node)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;
    for (auto child : adj[node])
    {
        level[child] = level[node] + 1;
        DFS(child);
    }
}
void preProcess(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        pre[i][0] = par[i];
    }
    for (ll i = 1; (1 << i) <= n; i++)
    {
        var = i;
        for (ll j = 1; j <= n; j++)
        {
            if (pre[j][i - 1] != -1)
            {
                pre[j][i] = pre[pre[j][i - 1]][i - 1];
            }
        }
    }
}
ll LCA(ll a, ll b, ll n)
{
    if (level[a] > level[b])
    {
        swap(a, b);
    }
    ll diff = level[b] - level[a];
    while (diff)
    {
        ll jump = log2(diff);
        b = pre[b][jump];
        diff -= (1 << jump);
    }
    if (a == b)
    {
        return b;
    }
    for (ll i = log2(n); i >= 0; i--)
    {
        if (pre[a][i] != -1 && pre[a][i] != pre[b][i])
        {
            cout << "h";
            a = pre[a][i];
            b = pre[b][i];
        }
    }
    return pre[a][0];
}