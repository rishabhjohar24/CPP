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
    ll t;
    cin>>t;
    while(t--){
        ll n, x, k, sum = 0;
        cin>>n>>k>>x;
        v(ll) arr(n, 0);
        fori(i, 0, n){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        while(k && arr.size() > 1){
            ll j = arr.size() - 1;
            ll val = arr[j] + arr[j - 1];
            if(val >= x){
                sum += x;
                arr.pop_back();
                arr.pop_back();
                k--;
            }
            else{
                break;
            }
        }
        fori(i, 0, arr.size()){
            sum += arr[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}