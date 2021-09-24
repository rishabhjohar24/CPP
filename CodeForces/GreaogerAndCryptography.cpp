#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll i = 0; i < t; i++){
        int n;
        cin>>n;
        if(n % 2){
            cout<<2<<" "<<n - 1<<"\n";
        }
        else{
            ll k = 0;
            for(ll j = 1; j < n; j++){
                if(n % j == 1){
                    k = j;
                    break;
                }
            }
            cout<<k<<" "<<n - 1<<"\n";
        }
    }
    return 0;
}