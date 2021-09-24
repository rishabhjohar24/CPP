#include<bits/stdc++.h>
using namespace std;
list<int> adj[100001], tr[100001];
bool visit[100001] = {false}, onStack[100001] = {false}, walk[100001] = {false};
vector<int> order, scc;
void addEdge(int a, int b){
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
    order.push_back(node);
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
void update(){
    if(scc.size() <= 1){
        return;
    }
    for(int i = 0; i < scc.size(); i++){
        walk[scc[i]] = true;
    }
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addEdge(a, b);
    }
    for(int i = 1; i <= n; i++){
        if(!visit[i]){
            DFS(i);
        }
    }
    reverse(order.begin(), order.end());
    memset(visit, false, sizeof(visit));
    for(int i = 1; i <= n; i++){
        if(!visit[i]){
            scc.clear();
            DFS1(i);
            update();
        }
    }
    for(int i = 1; i <= n; i++){
        cout<<walk[i]<<" ";
    }
    return 0;
}