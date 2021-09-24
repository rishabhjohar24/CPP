#include<bits/stdc++.h>
using namespace std;
int timer = 0;
void addedge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void IN_OUT(list <int> adj[], int v, bool visit[], int in[], int out[]){
    visit[v] = true;
    ++timer;
    in[v] = timer;
    for(auto x : adj[v]){
        if(!visit[x]){
            IN_OUT(adj, x, visit, in, out);
        }
    }
    ++timer;
    out[v] = timer;
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    list <int> adj[n + 1];
    bool visit[n + 1] = {false};
    int in[n + 1] = {0}, out[n + 1] = {0};
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    IN_OUT(adj, 1, visit, in, out);
    for(int i = 1; i <= n; i++){
        cout<<in[i]<<" ";
    }
    cout<<endl;
    for(int i = 1; i <= n; i++){
        cout<<out[i]<<" ";
    }
    return 0;
}