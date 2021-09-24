#include<bits/stdc++.h>
using namespace std;
void addedge(list<int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void SSSP(list<int>adj[], int v, bool visit[], int level[]){
    visit[v] = true;
    list <int> q;
    q.push_back(v);
    level[v] = 0;
    while(!q.empty()){
        int k = q.front();
        q.pop_front();
        for(auto x : adj[k]){
            if(!visit[x]){
                visit[x] = true;
                level[x] = 1 + level[k];
                q.push_back(x);
            }
        }
    }
}
int main(){
    srand(time(0));
    int n, m, a, b, node;
    cin>>n>>m;
    list <int> adj[n + 1];
    bool visit[n + 1] = { false };
    int level[n + 1] = {0};
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(adj, a, b);
    }
    node = rand() % n + 1;
    SSSP(adj, node, visit, level);
    for(int i = 1; i <= n; i++){
        cout<<level[i]<<" ";
    }
    return 0;
}