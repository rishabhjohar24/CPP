#include<bits/stdc++.h>
using namespace std;
list <int> adj[100001];
int level[100001] = {0}, dist[1000001] = {0};
bool visit[100001] = {false};

//utility function
void addedge(int, int);
void BFS(int );
void solution(int, int, int);

//Driver Code
int main(){
    int n, m, node, k, a, b, t;
    cin>>n>>m;				
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        addedge(a, b);
    }
    cin>>t;
    while(t--){
        cin>>node>>k; 
        solution(node, k, n);
    }
    return 0;
}

void solution(int node, int k, int n){
    memset(level, 0, sizeof(level));
    memset(visit, false, sizeof(visit));
    memset(dist, 0, sizeof(dist));
    BFS(node);
    cout<<node<<" "<<level[k]<<endl;
}
void BFS(int v){
    visit[v] = true;
    dist[v] = 0;
    list <int> q;
    q.push_back(v);
    while(!q.empty()){
        int k = q.front();
        q.pop_front();
        for(auto x : adj[k]){
            if(!visit[x]){
                visit[x] = true;
                dist[x] = 1 + dist[k];
                q.push_back(x);
                level[dist[x]]++;
            }
        }
    } 
}
void addedge(int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
