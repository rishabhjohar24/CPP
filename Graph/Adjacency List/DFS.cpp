#include<bits/stdc++.h>
using namespace std;
void addEdge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
}
void DFS(list <int> adj[], int k, bool visit[]){
    if(visit[k]){
        return;
    }
    visit[k] = true;
    cout<<k<<" ";
    list <int> :: iterator i;
    for(i = adj[k].begin(); i != adj[k].end(); i++){
        // if(!visit[*i]){
            DFS(adj, *i, visit);
        // }
    }
}
int main(){
    list <int> adj[4];
    bool visit[4] = {false};
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);
    DFS(adj, 2, visit);
    return 0;
}