#include<bits/stdc++.h>
using namespace std;
void addedge(list<int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
int DFS(list<int> adj[], int v, bool visit[], int arr[]){
    visit[v] = true;
    int curr = 1;
    for(auto x : adj[v]){
        if(!visit[x]){
            curr += DFS(adj, x, visit, arr);
        }
    }
    arr[v] = curr;
    return curr;
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    list<int> adj[n + 1];
    bool visit[n + 1] = {false};
    int arr[n + 1] = {0};
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    DFS(adj, 1, visit, arr);
    for(int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}