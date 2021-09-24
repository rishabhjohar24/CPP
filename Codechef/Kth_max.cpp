#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll i = 0; i < t; i++){
        ll n, k, mx = INT_MIN, cnt = 0;
        cin>>n>>k;
        vector<ll> arr(n, 0);
        for(ll i = 0; i < n; i++){
            cin>>arr[i];
        }
        mx = *max_element(arr.begin(), arr.end());
        for(ll i = k - 1; i < n; i++){
            if(arr[i] == mx){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }    
    return 0;
}