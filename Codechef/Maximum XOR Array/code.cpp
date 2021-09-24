#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j = 0; j < t; j++){
        int n, k;
        cin>>n>>k;
        ll i, ans = 0, p = pow(2, n);
        if(k >= p / 2){
            cout<<p * (p - 1)<<"\n";
        }
        else{
            cout<<((2 * k) * (p - 1))<<"\n";
        }
    }
    return 0;
}