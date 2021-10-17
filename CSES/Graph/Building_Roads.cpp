#include <bits/stdc++.h>
using namespace std;
bool visit[100001];
void DFS(list<int> adj[], int node)
{
    if (visit[node])
    {
        return;
    }
    visit[node] = true;
    for (auto child : adj[node])
    {
        DFS(adj, child);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    vector<int> roads;
    list<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visit[i])
        {
            roads.push_back(i);
            DFS(adj, i);
        }
    }
    n = roads.size();
    cout << n - 1 << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << roads[i] << " " << roads[i + 1] << "\n";
    }
    return 0;
}