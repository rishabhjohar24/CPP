#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m;
    vector<int> parent(n + 1), dist(n + 1, 0), vec{n};
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    dist[1] = 1;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (auto child : adj[par])
        {
            if (!dist[child])
            {
                parent[child] = par;
                dist[child] = dist[par] + 1;
                q.push(child);
            }
        }
    }
    if (dist[n])
    {
        cout << dist[n] << "\n";
        while (vec.back() != 1)
        {
            vec.push_back(parent[vec.back()]);
        }
        reverse(vec.begin(), vec.end());
        for (auto i : vec)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}