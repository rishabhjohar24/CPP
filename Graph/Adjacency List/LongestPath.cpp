#include<bits/stdc++.h>
using namespace std;
int _max, maxNode;
void addedge(list<int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void DFS(list <int> adj[], int v, bool visit[], int d){
    if(visit[v]){
        return;
    }
    if(_max < d){
        _max = d;
        maxNode = v;
    }
    visit[v] = true;
    for(auto x : adj[v]){
        DFS(adj, x, visit, d + 1);
    }
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    list <int> adj[n + 1];
    bool visit[n + 1] = {false};
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    _max = -1;
    DFS(adj, 1, visit, 0);
    memset(visit, false, sizeof(visit));
    _max = -1;
    DFS(adj, maxNode, visit, 0);
    cout<<_max;
    return 0;
}