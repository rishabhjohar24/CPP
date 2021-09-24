#include<bits/stdc++.h>
#define ll long long int
#define vv(t) vector<vector<t>>
#define v(t) vector<t>
#define ls(t) list<t>
#define q(t) queue<t>
#define pb push_back
#define mp make_pair
#define fori(t, k) for(ll i = t; i < k; i++)
#define forj(t, k) for(ll j = t; j < k; j++)
using namespace std;
void addEdge(ll a, ll b, ls(ll)adj[]){
    adj[a].pb(b);
    adj[b].pb(a);
}
int main(){
    ll n, m;
    cin>>n>>m;
    ls(ll)adj[n + 1];
    fori(0, m){
        ll a, b;
        cin>>a>>b;
        addEdge(a, b, adj);
    }
}