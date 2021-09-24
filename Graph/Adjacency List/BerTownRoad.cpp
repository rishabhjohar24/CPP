#include<bits/stdc++.h>
using namespace std;
list <int> adj[100001];
list <int> dir[100001];
bool visit[100001] = {false};
int flag = 1, timer = 0, in[100001] = {0}, low[100001] = {0};
void addedge(int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void addEdge(int a, int b){
    dir[a].push_back(b);
}
void print(int n){
    for(int i = 1; i < n; i++){
        for(auto x : dir[i]){
            cout<<i<<" "<<x<<"\n";
        }
    }
}
void DFS(int node, int parent){
    visit[node] = true;
    in[node] = timer;
    low[node] = timer;
    timer++;
    for(auto child : adj[node]){
        if(child == parent){
            continue;
        }
        if(!visit[child]){
            DFS(child, node);
            if(low[child] > in[node]){
                flag = 0;
                return;
            }
            addEdge(node, child);
            low[node] = min(low[node], low[child]);
        }
        else if(visit[child]){
            low[node] = min(low[node], in[child]);
            if(in[node] > in[child]){
                addEdge(node, child);
            }
        }
    }
} 
int main(){
    int n, m, a, b;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(a, b);
    }
    DFS(1, -1);
    if(flag){
        print(n + 1);
    }
    else{
        cout<<"0\n";
    }
    return 0;
}