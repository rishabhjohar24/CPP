#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool partition(ll arr[], ll sum, ll n){
    bool t[n + 1][sum + 1];
    memset(t, 0, sizeof(0));
    for(int i = 0; i <= sum; i++){
        t[0][i] = false;
    }
    for(int i = 0; i <= n; i++){
        t[i][0] = true;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(arr[i - 1] <= j){
                t[i][j] = t[i- 1][j - arr[i - 1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}
int main(){
    ll n, sum = 0;
    cin>>n;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    if(sum % 2 != 0){
        cout<<"NO";
    }
    else{
        if(partition(arr, sum / 2, n)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}