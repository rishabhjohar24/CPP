#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll nPr(ll n, ll r){
    ll t[n + 1][r + 1];
    memset(t, 0, sizeof(t));
    for(ll i = 0; i <= n; i++){
        for(ll j = 0; j <= min(i, r); j++){
            if(j == 0){
                t[i][j] = 1;
            }
            else{
                t[i][j] = t[i - 1][j] + j * t[i - 1][j - 1];
            }
        }
    }
    return t[n][r];
}
ll nPrt(ll n, ll r){
    if(r > n){
        return 0;
    }
    if(r == 0){
        return 1;
    }
    return nPr(n - 1, r) + r * nPr(n - 1, r - 1);
}
int main(){
    int n, r;
    cin>>n>>r;
    cout<<nPr(n, r);
    return 0;
}
