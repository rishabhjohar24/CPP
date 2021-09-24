#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solution(){
    ll n, toggle;
    cin >> n;
    ll aray[n];
    for(ll i = 0; i < n; i++){
        cin>>aray[i];
    }
    ll min = *min_element(aray, aray + n);
    ll freq = 0;
    for(ll i = 0; i < n; i++){
        if(aray[i] != min){
            if(aray[i] <= min * 2 && aray[i] > min){
                toggle = 1;
                break;
            }
        }
    }
    for(ll i = 0; i < n; i++){
        if(min == aray[i]){
            freq++;
        }
    }
    (toggle) ? cout << n << "\n" : cout <<n - freq << "\n";
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}