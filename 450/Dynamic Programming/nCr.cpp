#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll nCr(ll n, ll r){
    ll t[n + 1][r + 1];
    for(ll i = 0; i <= n; i++){
        for(ll j = 0; j <= min(i, r); j++){
            if(j == 0 || j == i){
                t[i][j] = 1;
            }
            else{
                t[i][j] = t[i - 1][j - 1] + t[i - 1][j];
            }
        }
    }
    return t[n][r];
}
ll nCrt(ll n, ll r){
    if(r > n){
        return 0;
    }
    if(r == 0 || r == n){
        return 1;
    }
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
int main(){
    ll n, r;
    cin>>n>>r;
    cout<<nCr(n, r);
    return 0;
}