#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        long long x, r, m, check = 0, sub;
        cin>>x>>r>>m;
        r = r * 60;
        m = m * 60;
        check += min(x, r);
        r -= min(x, r);
        check += 2 * t;
        if(check <= m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}