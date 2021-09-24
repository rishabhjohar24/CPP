#include<bits/stdc++.h>
#define ll long long
using namespace std;
void sol(){
    ll n, sum = 0, answer = 0;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        sum |= arr[i];
    }
    cout << sum <<" ";
    for(ll i = 0; i < n; i++){
        answer = answer | (arr[i] ^ sum);
    }
    cout << answer << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
       sol();
    }
    return 0;
}