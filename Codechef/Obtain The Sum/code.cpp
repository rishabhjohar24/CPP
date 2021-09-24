#include<bits/stdc++.h>
#define ll long long int
#define vv(t) vector<vector<t>>
#define v(t) vector<t>
#define ls(t) list<t>
#define q(t) queue<t>
#define pb push_back
#define mp make_pair
#define fori(p, t, k) for(ll p = t; p < k; p++)
#define ford(p, t, k) for(ll p = t - 1; p >= k; p--)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i = 0; i < t; i++){
        ll n, s, sum, ans;
        cin>>n>>s;
        sum = (n * (n + 1)) / 2;
        ans = (sum - s > 0 && sum - s <= n) ? sum - s : -1;
        cout<<ans<<"\n";
    }
    return 0;
}