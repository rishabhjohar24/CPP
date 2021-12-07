#include <bits/stdc++.h>
using namespace std;
bool isCutpoint[100001] = {false};
list<int> adj[100001];
int timer = 0, in[100001] = {0}, low[100001] = {0};
bool visited[100001] = {false};
void addedge(int a, int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}
void DFS(int node, int parent)
{
    visited[node] = true;
    in[node] = timer;
    low[node] = timer;
    timer++;
    int children = 0;
    for (auto child : adj[node])
    {
        if (child == parent)
        {
            continue;
        }
        if (!visited[child])
        {
            DFS(child, node);
            if (low[child] >= in[node] && parent != -1)
            {
                isCutpoint[node] = true;
            }
            children++;
            low[node] = min(low[node], low[child]);
        }
        else if (visited[child])
        {
            low[node] = min(low[node], in[child]);
        }
    }
    if (parent == -1 && children > 1)
    {
        isCutpoint[node] = true;
        ;
    }
}
int main()
{
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        addedge(a, b);
    }
    DFS(0, -1);
    for (int i = 1; i <= n; i++)
    {
        if (isCutpoint[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}