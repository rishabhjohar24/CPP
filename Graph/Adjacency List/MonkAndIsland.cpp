#include<bits/stdc++.h>
using namespace std;
void addedge(list<int>adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void monkPath(list<int>adj[], int v, bool visit[], int level[], int p){
    visit[v] = true;
    list <int> q;
    q.push_back(v);
    level[v] = 0;
    while(!q.empty()){
        int k = q.front();
        q.pop_front();
        for(auto x : adj[k]){
            if(!visit[x]){
                level[x] = 1 + level[k];
                visit[x] = true;
                q.push_back(x);
            }
        }
    }
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    list<int> adj[n + 1];
    bool visit[n + 1] = {false};
    int level[n + 1] = {0};
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    monkPath(adj, 1, visit, level, n);
    // for(int i = 1; i <= n; i++){
    //     cout<<level[i]<<" ";
    // }
    cout<<level[n + 1];
    return 0;
}