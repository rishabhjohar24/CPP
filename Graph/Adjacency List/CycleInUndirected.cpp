#include<bits/stdc++.h>
using namespace std;
void addedge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
bool isCycle(list <int> adj[], int v, bool visit[], int parent){
    visit[v] = true;
    for(auto child : adj[v]){
        if(!visit[child]){
            if(isCycle(adj, child, visit, v)){
                return true;
            }
        }
        else if(child != parent){
            return true;
        }
    }
    return false;
}
bool cycleChecker(list <int> adj[], int n){
    bool visit[n] = { false };
    for(int i = 1; i < n; i++){
        if(!visit[i]){
            if(isCycle(adj, i, visit, -1)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    list <int> adj[n + 1];
    for(int i = 1; i <= m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    cout<<cycleChecker(adj, n + 1);
    return 0;
}