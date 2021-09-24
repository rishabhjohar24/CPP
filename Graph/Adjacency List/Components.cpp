#include<bits/stdc++.h>
using namespace std;
void addedge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void DFS(list <int> adj[], int v, bool visit[]){
    if(visit[v] == true){
        return;
    }
    visit[v] = true;
    for(auto x :adj[v]){
        DFS(adj, x, visit);
    }
}
void components(list <int> adj[], int n, int m){
    bool visit[n] = { false };
    int comp = 0;
    for(int i = 0; i < n; i++){
        if(!visit[i]){
            comp++;
            DFS(adj, i, visit);
        }
    }
    cout<<comp;
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    list <int> adj[n];
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    components(adj, n, m);
    return 0;
}