#include <bits/stdc++.h>
using namespace std;
void DFS(vector<int> adj[], int d, int &maxNode, int node)
{
    maxNode = max(d, maxNode);
    for (auto child : adj[node])
    {
        DFS(adj, d + 1, maxNode, child);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        DFS(adj, 0, ans, i);
    }
    cout << ans;
    return 0;
}