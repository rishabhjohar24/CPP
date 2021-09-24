#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll i = 0; i < t; i++){
        ll n, ans = 0;
        cin>>n;
        vector<vector<ll>> arr(2, vector<ll>(n, 0));
        for(ll i = 0; i < 2; i++){
            for(ll j = 0; j < n; j++){
                ll a;
                cin>>a;
                arr[i][j] = a;
            }
        }
        for(ll j = 0; j < n; j++){
            if(!j){
                if(arr[1][j]){
                    if(!arr[0][j]){
                        ans++;
                    }
                    else{
                        if(arr[0][j + 1]){
                            ans++;
                        }
                    }
                }
            }
            else if(j == n - 1){
                if(arr[1][j]){
                    if(!arr[0][j]){
                        ans++;
                    }
                    else{
                        if(arr[0][j - 1]){
                            ans++;
                        }
                    }
                }     
            }
            else{
                if(arr[1][j]){
                    if(!arr[0][j]){
                        ans++;
                    }
                    else{
                        if(arr[0][j - 1] || arr[0][j + 1]){
                            ans++;
                        }
                    }
                }
            }   
        }
        cout<<ans<<"\n";
    }
    return 0;
}