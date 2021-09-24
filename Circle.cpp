#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, a, b, ini = 0, flag = 0, inc = 0, sig = 0, ans = 0, lmin = 0;
    cin>>n;
    string s;
    map<ll, ll> idx;
    cin>>s>>a>>b;
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == 'B'){
            if(!flag){
                ini = i;
                inc = i;
                flag = 1;
            }
            else{
                inc++;
            }
        }
        else{
            idx.insert({ini, inc});
            ini = 0;
            inc = 0;
            flag = 0;
        }
    }
    if(ini != 0){
        idx.insert({ini, inc});  
    }
    if(idx.find(n - 1) != idx.end() && idx.find(0) != idx.end()){
        sig = 1;
    }
    for(auto i : idx){
        if(!sig){
            ans += min(a, b * (i.second - i.first + 1));
        }
        else{
            if(i.first == n - 1){
                ini = (i.second - i.first + 1);
            }
            else if(i.first == 0){
                ini += (i.second - i.first + 1);
                ans += min(a, b * ini);
            }
            else{
               ans += min(a, b * (i.second - i.first + 1));
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}