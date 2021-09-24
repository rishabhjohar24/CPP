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
    srand(time(0));
    ll n = rand() % 20 + 1;
    cout<<n<<"\n";
    v(string) arr;
    string s;
    fori(0, n){
        cin>>s;
        arr.pb(s);
    }
    s = "";
    fori(0, arr.size() - 1){
        string s1 = arr[i], s2 = arr[i + 1];
        ll j = 0, mn = min(s1.size(), s2.size());
        while(mn--){
            if(s1[j] != s2[j]){
                s = s1.substr(0, j);
                break;
            }
            j++;
        }
    }
    cout<<s;
    return 0;
}