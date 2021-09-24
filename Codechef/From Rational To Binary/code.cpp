#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPower (ll x)
{
    return x && (!(x&(x-1)));
}
void sol(ll b){
    if(isPower(b)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        ll a, b;
        cin>>a>>b;
        sol(b);
    }
    return 0;
}