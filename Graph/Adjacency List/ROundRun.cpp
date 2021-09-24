#include<bits/stdc++.h>
using namespace std;
list <int> adj[100001], tr[100001];
bool visit[100001] = {false};
vector<int> in, scc;
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
    in.push_back(node);
}
void DF1(int node){
    if(visit[node]){
        return;
    }
    visit[node] = true;
    for(auto child : tr[node]){
        DFS1(child);
    }
    in.push_back(node);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 1; i <= n; i++){
        int a = i - 1;
        int b = (i - 1 + arr[i - 1] + 1) % n;
        addEdge(a, b);
    }
    for(int i = 1; i <= n; i++){
        if(!visit[i - 1]){
            DFS(i - 1);
        }
    }
    int res = 0;
    memset(visit, false, sizeof(visit));
	reverse(in.begin() , in.end());
	for(int i : in)
        if(!visit[i]){
            scc.clear();
            DFS1(i - 1);
            if(scc.size() == 1 && (scc[0] != adj[scc[0]][0])){
                continue;
            }
            res += scc.size();
        }
    }
    cout<<res<<endl;
}