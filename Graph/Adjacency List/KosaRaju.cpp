#include<bits/stdc++.h>
using namespace std;
list<int> adj[10001], tr[10001];
bool visit[10001] = {false};
vector<int> scc;
vector<int> in;
void addedge(int a, int b){
    adj[a].push_back(b);
    tr[b].push_back(a);
}
void DFS(int node){
    if(visit[node]){
        return;
    }
    visit[node] = true;
    for(auto child : adj[node]){
        DFS(child);
    }
    in.push_back(node);
}
void DFS1(int node){
    if(visit[node]){
        return;
    }
    visit[node] = true;
    for(auto child : tr[node]){
        DFS1(child);
    }
    scc.push_back(node);
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(a, b);
    }
    for(int i = 1; i <= n; i++){
        if(!visit[i]){
            DFS(i);
        }
    }
    memset(visit, false, sizeof(visit));
    for(int i = 1; i <= n; i++){
        if(!visit[in[n - i]]){
            scc.clear();
            DFS1(in[n - i]);
            cout<<"dfs1() called form "<<in[n - i]<<" and practicing "<<endl;
            for(auto node : scc){
                cout<<node<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}