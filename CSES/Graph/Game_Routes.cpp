#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;
list<int> adj[N];
int main()
{
    int n, m;
    cin >> n >> m;
    queue<int> q;
    vector<int> in(n + 1, 0), dist(n + 1, 0);
    dist[1] = 1;
    for (int i = 0, a, b; i < m; i++)
    {
        cin >> a >> b;
        in[b]++;
        adj[a].push_back(b);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!in[i])
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int child : adj[node])
        {
            in[child]--;
            if (!in[child])
            {
                q.push(child);
            }
        }
        for (int child : adj[node])
        {
            (dist[child] = dist[child] + dist[node]) %= MOD;
        }
    }
    cout << dist[n];
    return 0;
}