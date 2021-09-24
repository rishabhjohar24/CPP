#include<bits/stdc++.h>
using namespace std;
void addedge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void DFS(list <int> adj[], int v, bool visit[], int dist[], int p){
    if(visit[v]){
        return;
    }
    dist[v] = p;
    visit[v] = true;
    for(auto x : adj[v]){
        DFS(adj, x, visit, dist, p + 1);
    }
}
int SSSP(int dist[], int n + 1){
    int min_ = INT_MAX;
    for(int i = 1; i <= n; i++){
        if(dist[i] != 0){
            min_ = min(min_, dist[i]);
        }
    }
    return min_;
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    list <int> adj[n + 1];
    bool visit[n + 1] = {false};
    int dist[n + 1] = {0}; 
    for(int i = 1; i <= m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    DFS(adj, 1, visit, dist, 0);
    cout<<SSSP(dist, n);
    return 0;
}