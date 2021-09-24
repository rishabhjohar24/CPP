#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define at ios_base::sync_with_stdio(false);
#define lt cin.tie(NULL);
 
 
void solution();

 
int main(){
    at;
    lt;
    ll t;
    cin>>t;
    for(int i = 0; i < t; i++){
        solution();
    }
    return 0;
}
void solution(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a = 0, b = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '1'){
            b++;
        }
        else{
            a++;
        }
    }
    vector<ll> vec;
    for(ll i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(n / i == i){
                vec.push_back(i);
            }
            else{
                vec.push_back(n / i);
                vec.push_back(i);
            }
        }
    }
    ll ans = 1e9;
    for(auto k : vec){
        vector<ll> frequency(k);
        for(ll i = 0; i < k; i++){
            for(ll j = i; j < n; j += k){
                if(s[j] == '1'){
                    frequency[i]++;
                }
            }
        }
        ll req = n / k;
        for(ll i = 0; i  <k; i++){
            ll tc = req - frequency[i];
            tc += (b - frequency[i]);
            ans = min(ans, tc);
        }
    }
    cout<<ans<<endl;
}