#include<bits/stdc++.h>
using namespace std;
list <int> adj[100001];
bool visit[100001] = {false};
int in[100001] = {0}, low[100001] = {0}, timer = 0;
void addedge(int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void DFS(int node, int parent){
    visit[node] = true;
    in[node] = timer;
    low[node] = timer;
    timer++;
    for(auto child : adj[node]){
        if(child == parent){
            continue;
        }
        if(!visit[child]){
            DFS(child, node);
            if(low[child] > in[node]){
                cout<<node<<" - "<<child<<" is a bridge\n";
            }
            low[node] = min(low[node], low[child]);
        }
        else if(visit[child]){
            low[node] = min(low[node], in[child]);
        }
    }
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(a, b);
    }
    DFS(1, -1);
    for(int i = 1; i <= n; i++){
        cout<<in[i]<<" ";
    }
    cout<<endl;
    for(int i = 1; i <= n; i++){
        cout<<low[i]<<" ";
    }
    return 0;
}