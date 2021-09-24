#include<bits/stdc++.h>
using namespace std;
void addedge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void DFS(list <int> adj[], bool visit[], int v){
    if(visit[v]){
        return;
    }
    visit[v] = true;
    for(auto x : adj[v]){
        if(!visit[x]){
            DFS(adj, visit, x);
        }
    }
}
int makeConnections(int n, int m, int arr[][2]){
    list <int> adj[n];
    bool visit[n] = {false};
    int edges = 0, components = 0, redundant;
    for(int i = 0; i < m; i++){
        addedge(adj, arr[i][0], arr[i][1]);
        edges += 1;
    }
    for(int i = 0; i < n; i++){
        if(visit[i] == false){
            components += 1;
            DFS(adj, visit, i);
        }
    }
    redundant = edges - (n - 1) - (components - 1);
    if(edges < n - 1){
        return - 1;
    }
    if(redundant >= (components - 1)){
        return components - 1;
    }
    return -1;
}
int main(){
    int m, n;
    cin>>n>>m;
    int arr[m][2];
    for(int i = 0; i < m; i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    cout<<makeConnections(n, m, arr);
    return 0;
}