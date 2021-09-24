#include<bits/stdc++.h>
#define ll long long
using namespace std;
unordered_map<ll, int> l;
void maker(){
    long long p = 2;
    while(p < 1e18){
        l.insert({p, 1});
        p *= 2;
    }
}
int main(){
    maker();
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        ll a, b;
        cin>>a>>b;
        if(l.find(b) != l.end()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}