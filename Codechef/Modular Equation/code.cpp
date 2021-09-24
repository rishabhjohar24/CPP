// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, m;
//         long count = 0;
//         cin>>n>>m;
//         for(int i = 1; i < n; i++){
//             for(int j = i + 1; j<=n; j++){
//                 if(((m % i) % j) == ((m % j) % i)){
//                     cout<<i<<" "<<j<<endl;
//                     count++;
//                 }
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }

// [1:13 AM]
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll i = 0; i < t; i++){
        ll n , m;
        cin>>n>>m;
        ll counter = 0;
        vector <ll> array(n + 1, 1);
        for(ll i = 2; i <= n; i++){
            ll a = m % i;
            counter += array[a];
            for(ll j = a; j <= n;  j += i){
                array[j]++;
            }
        }
        cout<<counter<<"\n";
    }
    return 0;
}