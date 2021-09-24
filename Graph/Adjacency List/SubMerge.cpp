#include<bits/stdc++.h>
using namespace std;
list<int> adj[100001];
bool visit [100001] = {false};
set <int> isCutpoint;
int in[100001] = {0}, low[100001] = {0};
int timer = 0, flag = 0;
void addedge(int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}
void DFS(int node, int parent){
    visit[node] = true;
    in[node] = low[node] = timer;
    timer++;
    int children = 0;
    for(auto child : adj[node]){
        if(child == parent){
            continue;
        }
        if(!visit[child]){
            DFS(child, node);
            if(low[child] >= in[node] && parent != -1){
                isCutpoint.insert(node);
                flag = 1;
            }
            children++;
            low[node] = min(low[node], low[child]);
        }
        else if(visit[child]){
            low[node] = min(low[node], in[child]);
        }
    }
    if(parent == -1 && children > 1){
        flag = 1;
        isCutpoint.insert(node);
    }
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(a, b);
    }
    DFS(1, - 1);
    if(flag){
        for(int i = 0; i < n; i++){
            if(isCutpoint[i]){
                cout<<i<<" ";
            }
        }
    }
    else{
        cout<<0;
    }
    return 0;
}