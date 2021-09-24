#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
void addEdge(ll u, ll v, list<ll>adj[]){
    adj[u].pb(v);
    adj[v].pb(u);
}
void components(ll v, list<ll>adj[], ll visit[]){
    if(visit[v]){
        return;
    }
    visit[v] = true;
    for(auto i : adj[v]){
        components(i, adj, visit);
    }
}
int main(){
    ll n;
    cin>>n;
    list<ll>adj[n + 1];
    ll visit[n + 1] = {0};
    for(ll i = 0; i < n; i++){
        ll a, b;
        cin>>a>>b;
        addEdge(a, b, adj);
    }
    ll edge = 0, comp = 0;
    for(ll i = 1; i <= n; i++){
        if(!visit[i]){
            comp ++;
            components(i, adj, visit);
        }
        edge += adj[i].size();
    }
    edge /= 2;
    if(edge > n - 1){
        cout<<comp - 1;
    }
    else if(edge == n - 1 && !comp){
        cout<<0;
    }
    else{
        cout<<-1;
    }
    return 0;
}