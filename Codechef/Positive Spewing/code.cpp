// #include<bits/stdc++.h>
// #define ll long long int
// #define vv(t) vector<vector<t>>
// #define v(t) vector<t>
// #define ls(t) list<t>
// #define q(t) queue<t>
// #define pb push_back
// #define mp make_pair
// #define fori(p, t, k) for(ll p = t; p < k; p++)
// #define ford(p, t, k) for(ll p = t - 1; p >= k; p--)
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     for(ll i = 0; i < t; i++){
//         ll n, k;
//         cin>>n>>k;
//         v(ll)arr(n, 0), idx;
//         fori(i, 0, n){
//             cin>>arr[i];
//             if(arr[i]){
//                 idx.pb(i);
//             }
//         }
//         int j = 0;
//         for(int i = 0; i < n; i++){
//             if(i == idx[j]){

//             }
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll          long long
#define vi          vector<int>
#define vll         vector<ll>
#define pll         pair<ll, ll>
#define pii         pair<int, int>
#define ld          long double
#define ff          first
#define ss          second
#define vs          vector<string>
#define vpll        vector<pll>
#define vb          vector<bool>
#define mp          make_pair
#define pb          push_back
#define endl        '\n'
const ll INF       = 2e18;
const ll mod       = 1000000007;
const ll mod2      = 998244353;
int main(){

    int tc = 0, t = 1;
    cin >> t;
    while (tc++ < t)
    {
        ll n, k;
        cin >> n >> k;
        vll arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool all_zero = true;
        for(auto x: arr){
            if(x > 0){
                all_zero = false;
                break;
            }
        }
        if(all_zero){
            cout << 0 << endl;
            continue;
        }
        if(k == 0){
            ll ans = 0;
            for(auto x: arr){
                ans += x;
            }
            cout << ans << endl;
            continue;
        }
        set<ll> pos;
        set<ll, greater<ll>> posG;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                pos.insert(i);
                posG.insert(i);
                pos.insert(i+n);
                posG.insert(i+n);
            }
        }
        vll ans_arr(n, k);
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                ll val1 = *pos.lower_bound(i);
                ll val2 = *posG.lower_bound(i+n);
                ll dist = min(abs(val1 - i), abs(val2 - (i+n)));
                ans_arr[i] -= dist;
            }
        }
        for(auto &x: ans_arr){
            if(x < 0){
                x = 0;
            }
        }
        ll sum = 0;
        for(auto x: arr){
            sum += x;
        }
        for(auto x: ans_arr){
            sum += 2LL*x;
        }
        cout << sum << endl;
    }
    return 0;
}