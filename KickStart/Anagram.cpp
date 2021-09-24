#include<bits/stdc++.h>
#define ll long long int
#define vv(t) vector<vector<t>>
#define v(t) vector<t>
#define ls(t) list<t>
#define q(t) queue<t>
#define pb push_back
#define mp make_pair
#define fori(t, k) for(ll i = t; i < k; i++)
#define forj(t, k) for(ll j = t; j < k; j++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    fori(0, t){
        string s, a = "";
        cin>>s;
        ll n = s.size();
        map<char, int> mpk;
        fori(0, n){
            mpk[s[i]]++;
        }
        fori(0, n){
            for(auto j : mpk){
                if(j.first != s[i] && j.second > 0){
                    a += j.first;
                    j.second--;
                    break;
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}