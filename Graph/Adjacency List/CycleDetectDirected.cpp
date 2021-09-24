#include<bits/stdc++.h>
using namespace std;
void addEdge(list<int> adj[], int v, int u){
    adj[v].push_back(u);
}
bool isCycle(list <int> adj[], int v, bool visit[], bool *track){
    visit[v] = true;
    track[v] = true;
    list <int> :: iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); i++){
        if(!visit[*i] && isCycle(adj, *i, visit, track)){
            return true;
        }
        else if(track[*i]){
            return = true;
        }
    }
    track[*v] false;
    return false;
}
bool cycle(list<int> adj[], int s, int n){
    bool* visit = new bool[n];
    bool* track = new bool[n];
    for(int i = 0; i < n; i++){
        visit[i] = false;
        track[i] = false;
    }
    for(int i = 0; i < n; i++){
        if(isCycle(adj, i, visit, track)){
            return true;
        }
    }
    return false;
}
int main(){
    list <int> adj[5];
    addEdge(adj, 0, 1, 1);
    addEdge(adj, 1, 2, 1);
    addEdge(adj, 1, 4, 1);
    addEdge(adj, 2, 3, 1);
    addEdge(adj, 3, 4, 1);
    cout<<cycle(adj, 2, 4);
    return 0;
}