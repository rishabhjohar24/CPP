#include<bits/stdc++.h>
using namespace std;
void addEdge(list<int> adj[], int v, int u, bool visit[][4]){
    if(u == v && visit[u][v] == false && visit[v][u] == false){
        adj[v].push_back(u);
        visit[v][u] = true;
    }
    if(visit[u][v] == false && visit[v][u] == false){
        adj[v].push_back(u);
        adj[u].push_back(v);
        visit[v][u] = true;
        visit[u][v] = true;
    }
}
void print(list <int> adj[], int n){
    for(int i = 0; i < n; i++){
        cout<<i<<"-> ";
        for(auto x : adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void clone(list <int> adj[], int n){
    list <int> cloned[n];
    bool visit[4][4];
    memset(visit, false, sizeof(visit));
    for(int i = 0; i < n; i++){
        for(auto x : adj[i]){
            addEdge(cloned, i, x, visit);
        }
    }
    cout<<"Cloned Graph \n";
    print(cloned, n);
}
int main(){
    list <int> adj[4];
    bool visit[4][4];
    memset(visit, false, sizeof(visit));
    addEdge(adj, 0, 1, visit);
    addEdge(adj, 0, 2, visit);
    addEdge(adj, 1, 2, visit);
    addEdge(adj, 2, 0, visit);
    addEdge(adj, 2, 3, visit);
    addEdge(adj, 3, 3, visit);
    print(adj, 4);
    clone(adj, 4);
    return 0;
}