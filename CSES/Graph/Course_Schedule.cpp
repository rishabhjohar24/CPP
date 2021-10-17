#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<int> in(n + 1, 0), ans;
    queue<int> q;
    for (int i = 0; i < m; i++)
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
        ans.push_back(node);
        q.pop();
        for (auto child : adj[node])
        {
            in[child]--;
            if (in[child] == 0)
            {
                q.push(child);
            }
        }
    }
    if (ans.size() == n)
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE";
    }
    return 0;
}