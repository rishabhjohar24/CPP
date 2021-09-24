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
void addEdge(ll a, ll b, ls(ll) adj[]){
    adj[a].pb(b);
}
void topologicalSort(ll n, ls(ll)adj[], v(ll)&in, v(bool)present){
    q(ll) q;
    fori(0, 26){
        if(!in[i] && present[i]){
            q.push(i);
        }
    }
    while(!q.empty()){
        ll node = q.front();
        char c = ((char) 'a' + node);
        cout<<c<<" ";
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
    ll n, k;
    cin>>n>>k;
    v(bool) present(27, false);
    v(string) arr(n, "");
    v(ll) in(27, 0);
    ls(ll)adj[27];
    fori(0, n){
        cin>>arr[i];
    }
    fori(0, n - 1){
        string a = arr[i];
        string b = arr[i + 1];
        forj(0, min(a.size(), b.size())){
            present[b[j] - 'a'] = true;
            present[a[j] - 'a'] = true;
            if(a[j] != b[j]){
                addEdge(a[j] - 'a',  b[j] - 'a', adj);
                in[b[j] - 'a']++;
                break;
            }
        }
    }
    // fori(0, 26){
    //     cout<<present[i]<<" ";
    // }
    topologicalSort(n, adj, in, present);
    return 0;
}