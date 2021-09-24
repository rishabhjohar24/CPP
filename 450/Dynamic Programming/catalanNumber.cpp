#include<iostream>
#define ll long long
using namespace std;
ll catalan(ll n){
    ll t[n + 1] = {0};
    t[0] = t[1] = 1;
    for(ll i = 2; i <= n; i++){
        for(int j = 0; j < i; j++){
            t[i] += t[j] * t[i - j - 1];
        }
    }
    return t[n];
}
ll catalant(ll n){
    if(n <= 1){
        return 1;
    }
    ll res = 0;
    for(ll i = 0; i < n; i++){
        res += catalan(i) * catalan(n - i - 1);
    }
    return res;
}
int main(){
    ll n;
    cin>>n;
    cout<<catalan(n);
    return 0;
}