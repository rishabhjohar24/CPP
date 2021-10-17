#include "bits/stdc++.h"
const int N = 1e5 + 5;
using namespace std;
int dist[N], nxt[N];
bool visit[N];
vector<int> adj[N];
void DFS(int parent, int n)
{
    dist[parent] = (parent == n) ? 1 : -1e9;
    for (auto child : adj[parent])
    {
        if (!dist[child])
        {
            DFS(child, n);
        }
        if (dist[parent] < dist[child] + 1)
        {
            nxt[parent] = child;
            dist[parent] = dist[child] + 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
    }
    DFS(1, n);
    if (dist[1] < 0)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        cout << dist[1] << "\n";
        for (int i = 1; i != n; i = nxt[i])
        {
            cout << i << " ";
        }
        cout << n << "\n";
    }
    return 0;
}