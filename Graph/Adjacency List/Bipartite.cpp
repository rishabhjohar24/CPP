#include<bits/stdc++.h>
using namespace std;
void addedge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
bool isBipartite(list <int> adj[], int n, int v, int visit[], int color[], int c){
    visit[v] = 1;
    color[v] = c;
    for(auto i : adj[v]){
        if(!visit[i]){
            if(isBipartite(adj, n, i, visit, color, c ^ 1) == false){
                return false;
            }
        }
        else{
            if(color[i] == color[v]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    int color[n + 1] = {0}, visit[n + 1] = {0};
    list <int> adj[n + 1];
    for(int i = 1; i <= m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    cout<<isBipartite(adj, n + 1, 1, visit, color, 0);
    return 0;
}