#include <bits/stdc++.h>
using namespace std;
const int sz = 1e6;
vector<int> adj[sz + 1];
vector<vector<int>> dp(2, vector<int>(sz + 1, 0));
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}