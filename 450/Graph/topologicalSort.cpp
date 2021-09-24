#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
void addEdge(ll a, ll b, list<ll>adj[]){
    adj[a].pb(b);
}
void topoSort(ll in[], ll n, list<ll>adj[]){
    queue<ll> q;
    for(ll i = 0; i < n; i++){
        if(!in[i]){
            q.push(i);
        }
    }
    while(!q.empty()){
        ll node = q.front();
        cout<<node<<" ";
        q.pop();
        for(auto i : adj[node]){
            in[i]--;
            if(!in[i]){
                q.push(i);
            }
        }
    }
}
int main(){
    ll n, m;
    cin>>n>>m;
    list<ll> adj[n + 1];
    ll in[n + 1] = {0};
    for(ll i = 0; i < m; i++){
        ll a, b;
        cin>>a>>b;
        addEdge(a, b, adj);
        in[b]++;
    }
    topoSort(in, n, adj);
    return 0;
}