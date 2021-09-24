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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    fori(0, t){
        ll n, mx = 0;
        map<ll, ll> k;
        cin>>n;
        v(ll) a(n, 0);
        fori(0, n){
            cin>>a[i];
            k[a[i]]++;
        }
         if(n <= 2){
              cout << mx << "\n";
            }
        else {
            for(auto it: k) {
                mx = max(mx,it.second);
            }
            if(mx == 1) cout << n - 2 << "\n";
            else cout << n-mx << "\n";
        }
        cout<<"\n";
    }
    return 0;
}