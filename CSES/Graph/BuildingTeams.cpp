#include <bits/stdc++.h>
using namespace std;
bool visit[100001];
int ans[100001];
bool isBipartite(int node, list<int> adj[], int c)
{
    visit[node] = true;
    ans[node] = c;
    for (auto child : adj[node])
    {
        if (!visit[child])
        {
            if (!isBipartite(child, adj, c ^ 1))
            {
                return false;
            }
        }
        else
        {
            if (ans[node] == ans[child])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n, m, a, b, flag = 0;
    cin >> n >> m;
    list<int> adj[(n + 1)];
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
            if (!isBipartite(i, adj, 0))
            {
                flag = 1;
            }
        }
    }
    if (flag)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (ans[i])
            {
                cout << "1 ";
            }
            else
            {
                cout << "2 ";
            }
        }
    }
    return 0;
}