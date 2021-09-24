#include<bits/stdc++.h>
using namespace std;
list <int> adj[100001];
bool visit[100001] = {false};
int in[100001] = {0};
void addedge(int a, int b){
    adj[a].push_back(b);
}
void kahn_algo(int n){
    list <int> q;
    for(int i = 1; i <= n; i++){
        if(in[i] == 0){
            q.push_back(i);
        }
    }
    while (!q.empty()){
        int node = q.front();
        cout<<node<<" ";
        q.pop_front();
        for(auto child : adj[node]){
            in[child]--;
            if(in[child] == 0){
                q.push_back(child);
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
        in[b]++;
    }
    kahn_algo(n);
    return 0;
}