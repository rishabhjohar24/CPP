#include <bits/stdc++.h>
using namespace std;
bool vis[100001] = {false};
vector<int> parent(100001);
void DFS(int node, list<int> adj[], int par)
{
    vis[node] = true;
    parent[node] = par;
    for (auto child : adj[node])
    {
        if (!vis[child])
        {
            DFS(child, adj, node);
        }
        else
        {
            if (par != child)
            {
                vector<int> arr;
                int curr = node;
                arr.push_back(node);
                while (parent[curr] != child)
                {
                    curr = parent[curr];
                    arr.push_back(curr);
                }
                arr.push_back(child);
                arr.push_back(node);
                cout << arr.size() << "\n";
                for (auto i : arr)
                {
                    cout << i << " ";
                }
                exit(0);
            }
        }
    }
}
int main()
{
    vector<int> temp;
    int n, m, a, b;
    cin >> n >> m;
    vector<int> ans;
    list<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            DFS(i, adj, 0);
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}