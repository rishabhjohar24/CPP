#include<bits/stdc++.h>
#define ll long long int
#define vv(t) vector<vector<t>>
#define v(t) vector<t>
#define ls(t) list<t>
#define q(t) queue<t>
#define pb push_back
#define mp make_pair
#define fori(p, t, k) for(ll p = t; p < k; p++)
#define ford(p, t, k) for(ll p = t - 1; p >= k; p--)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i = 0; i < t; i++){
        ll n;
        cin>>n;
        vv(ll)grid(n, v(ll)(n, -1));
        if(n == 1){
            cout<<1<<endl;
        }
        else if(n % 2){
            fori(i, 0, n){
                fori(j, 0, n){
                    if(i == j){
                        grid[i][j] = 1;
                    }
                    cout<<grid[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else{
            fori(i, 0, n){
                fori(j, 0, n){
                    cout<<grid[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}