#include<bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll a, ll b, list<ll>adj[]){
    adj[a].push_back(b);
    adj[b].push_back(a);
}
void comp(ll a, vector<bool>&visit, list<ll>adj[]){
    if(!visit[a]){
        return;
    }
    visit[a] = true;
    for(auto x : adj[a]){
        comp(x, visit, adj);
    }
}
int main(){
    ll t;
    cin>>t;
    for(ll i = 0; i < t; i++){
        ll n, val, cnt = 0;
        cin>>n;
        vector<ll>arr(n + 1, 0);
        list<ll>adj[n + 1];
        vector<bool>visit(n + 1, false);
        for(ll i = 1; i < n + 1; i++){
            cin>>val;
            arr[i] = val;
        }
        for(ll i = 1; i < n ; i++){
            for(ll j = i + 1; j < n + 1; j++){
                if(j - i != arr[j] - arr[i]){
                   add(j, i, adj);
                }
            }
        }
        for(ll i = 1; i <= n; i++){
            if(!visit[i]){
                comp(i, visit, adj);
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}