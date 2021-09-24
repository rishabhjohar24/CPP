#include<bits/stdc++.h>
#define ll long long int
#define vv(t) vector<vector<t>>
#define v(t) vector<t>
#define ls(t) list<t>
#define q(t) queue<t>
#define pb push_back
#define mp make_pair
#define fori(t, k) for(ll i = t; i < k; i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    fori(0, t){
        ll n;
        cin>>n;
        v(string) s(n, "");
        fori(0, n){
            cin>>s[i];
        }    
        string p = "";
        for(ll i = 0; i < n; i++){
            ll dflg = 0;
            for(ll j = 0; j < n; j++){
                p = "";
                if(j == 0){
                    (s[i][0] == '1') ? p = '0' + s[i].substr(1, n - 1) : p = '1' + s[i].substr(1, n - 1);
                }
                else{
                    (s[i][j] == '1') ? p = s[i].substr(0, j) +'0' + s[i].substr(j + 1, n - j) : p = s[i].substr(0, j) +'1' + s[i].substr(j + 1, n - j);
                }
                ll flag = 0;  
                for(ll k = 0; k < n; k++){
                    if(i == k){
                        continue;
                    }
                    else if(p == s[k]){
                        flag = 1;
                        break;
                    }
                }
                if(!flag){
                    cout<<p<<endl;
                    dflg = 1;
                    break;
                }
            }
            if(dflg){
                break;
            }
        }
    }
    return 0;
}