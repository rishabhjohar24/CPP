#include <bits/stdc++.h>
using namespace std;
list<int> adj[10001];
vector<int> vec;
int in[10001] = {0};
void addedge(int a, int b)
{
    adj[a].push_back(b);
}
bool kahn(int n)
{
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int node = q.top();
        vec.push_back(node);
        q.pop();
        for (auto child : adj[node])
        {
            in[child]--;
            if (!in[child])
            {
                q.push(child);
            }
        }
    }
    return vec.size() == n;
}
int main()
{
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        addedge(a, b);
        in[b]++;
    }
    if (!kahn(n))
    {
        cout << "Not Possible";
    }
    else
    {
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
    }
    return 0;
}