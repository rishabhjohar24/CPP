#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
bool check(string a, string b){
    ll s = 0;
    for(ll i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            s++;
        }
        if(s > 1){
            return false;
        }
    }
    if(!s){
        return false;
    }
    return true;
}
void addEdge(string u, string v, map<string, list<string>> adj){
    adj[u].pb(v);
    adj[v].pb(u);
}
int main(){
    ll n, mn = INT_MAX;
    cin>>n;
    string arr[n], start, end, for_end;
    cin>>start>>end;
    map<string, list<string>>adj;
    for(ll i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(check(start, arr[j])){
                addEdge(start, arr[j], adj);
            }
        }
        start = arr[i];
    }
    for(ll i = 0; i < n; i++){
        if(check(end, arr[i])){
            addEdge(end, arr[i], adj);
        }
    }
    for(auto i : adj){
        int cnt = 0;
        cout<<i.second.size();
    }
    cout<<mn + 1;
    return 0;
}