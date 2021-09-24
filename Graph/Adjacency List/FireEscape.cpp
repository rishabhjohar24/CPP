#include<bits/stdc++.h>
using namespace std;
void addedge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
int DFS(list<int>adj[], int v, bool visit[]){
    if(visit[v]){
        return 0;
    }
    int k = 1;
    visit[v] = true;
    for(auto x : adj[v]){
        k += DFS(adj, x, visit);
    }
    return k;
}
int components(list<int> adj[], int n, int node[]){
    bool visit[n] = {false};
    int comp = 0;
    for(int i = 1; i < n; i++){
        if(!visit[i]){
            comp++;
            node[comp] = DFS(adj, i, visit);
        }
    }
    return comp;
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    list <int> adj[n + 1];
    int node[n + 1] = {0};
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    int leaders = 1, comp = components(adj, n + 1, node);
    for(int i = 1; i <= n; i++){
        if(node[i] != 0){
            leaders *= node[i];
        }
    }
    cout<<comp<<" "<<leaders;
    return 0;
}