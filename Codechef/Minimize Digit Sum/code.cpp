
#include<bits/stdc++.h>
using namespace std;
int solve(int n, int base){
    int s = 0;
    while (n > 0) {
        s = s + n % base;
        n = n / base;   
    }
    return s;
}
int main(){
    int t, n, l , r; 
    cin>>t;
    while (t--){
        int tmp = 1e9 , s = 0 , cnt = 0;
        cin>>n>>l>>r;
        int a = n / r;
        for(int i = r; i >= l; i=n/a){
            ++a;
            if(i == n / a){
                a = n / i;
                continue;
            }
            s = solve(n,i);
            if (s == 1 ){
                cnt = i; 
                break ;
            }
            if (s <= tmp){
                tmp = s;
                cnt = i;
            }
        }
        cout << cnt << endl;
    }
    return 0; 
}
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll sum(ll n, ll j, ll mn){
//     ll res = 0;
//     while(n){
//         res += n % j;
//         if(mn < res){
//             return INT_MAX;
//         }
//         n /= j;
//     }
//     return res;
// }
// ll ans(ll r, ll l, ll n){
//     ll  mn = INT_MAX, k;
//     if(r >= n && l <= n){
//         return n;
//     }
//     else if(r > n && l > n){
//         return l;
//     }
//     for(ll j = r; j >= l; j--){
//         ll res = sum(n, j, mn);
//         if(mn >= res){
//             mn = res;
//             k = j;
//         }
//     }
//     return k;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     for(ll i = 0; i < t; i++){
//         ll n, l, r;
//         cin>>n>>l>>r;
//         cout<<ans(r, l, n)<<endl;
//     }
//     return 0;
// }