#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(1e6 + 1);
vector<int> subtree(1e6 + 1, 0), depth(1e6 + 1, 0);
void DFS(int node)
{
    subtree[node] = 1;
    for (auto child : adj[node])
    {
        depth[child] = depth[node] + 1;
        DFS(child);
        subtree[node] += subtree[child];
    }
}
int main()
{
    int n, par;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        cin >> par;
        adj[par].push_back(i);
    }
    DFS(1);
    for (int i = 1; i <= n; i++)
    {
        cout << subtree[i] - 1 << " ";
    }
    cout << "\n";
    return 0;
}