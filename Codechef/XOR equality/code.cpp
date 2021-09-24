#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1e9 + 7;
int main(){
    ll t;
    cin>>t;
    for(int i = 0; i < t; i++){
        ll n, base = 2, ans = 1;
        cin>>n;
        n = n - 1;
        while(n){
            if(n & 1){
                ans = ans * base % MOD;
            }
            n = n / 2;
            base = base * base % MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}
// ll powerLL(ll x, ll n)
// {
//     ll result = 1;
//     while (n) {
//         if (n & 1)
//             result = result * x % MOD;
//         n = n / 2;
//         x = x * x % MOD;
//     }
//     return result;
// }
// int main(){
//     ll t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         ll n;
//         cin>>n;
//         cout<<powerLL(2, n - )<<endl;
//     }
//     return 0;
// }