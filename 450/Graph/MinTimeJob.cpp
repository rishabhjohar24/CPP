#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
void addEdge(ll a, ll b, list<ll>adj[]){
    adj[a].pb(b);
}
void minJob(list<ll>adj[], ll n, ll in[]){
    queue<ll> q;
    ll job[n + 1] = {0};
    for(ll i = 1; i <= n; i++){
        if(!in[i]){
            job[i]++;
            q.push(i);
        }
    }
    while(!q.empty()){
        ll node = q.front();
        q.pop();
        for(auto i : adj[node]){
            in[i]--;
            if(!in[i]){
                job[i] = job[node] + 1;
                q.push(i);
            }
        }
    }
    for(ll i = 1; i <= n; i++){
        cout<<job[i]<<" ";
    }
}
int main(){
    ll n, m;
    cin>>n>>m;
    ll in[n + 1] = {0};
    list<ll> adj[n + 1];
    for(ll i = 0; i < m; i++){
        ll a, b;
        cin>>a>>b;
        in[b]++;
        addEdge(a, b, adj);
    }
    minJob(adj, n, in);
    return 0;
}