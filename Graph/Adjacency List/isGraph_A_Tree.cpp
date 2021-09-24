#include<bits/stdc++.h>
using namespace std;
void addedge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void DFS(list <int> adj[], int v, bool visit[]){
    if(visit[v]){
        return;
    }
    visit[v] = true;
    for(auto x : adj[v]){
        DFS(adj, x, visit);
    }
}
bool isGraph_A_Tree(list <int> adj[], int n){
    bool visit[n] = { false };
    int components = 0;
    for(int i = 1; i < n; i++){
        if(!visit[i]){
            components++;
            DFS(adj, i, visit);
        }
    }
    // cout<<components;
    if(components > 1){
        return false;
    }
    return true;
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    list <int> adj[n + 1];
    for(int i = 1; i <= m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    if(isGraph_A_Tree(adj, n + 1) && m == n - 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}