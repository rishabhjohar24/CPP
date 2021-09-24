#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void print(vector<int> adj[], int n){
    for(int i = 0; i < n; i++){
        for(auto x : adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n, v, u;
    vector <int> adj[5];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    print(adj, 5);
    return 0;
}
    