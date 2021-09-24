#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cin>>n;
    int l[n], r[n], arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    l[0] = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > l[i - 1]){
            l[i] = arr[i];
        } else {
            l[i] = l[i - 1];
        }
    }
    r[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] > r[i + 1]){
            r[i] = arr[i];
        } else {
            r[i] = r[i + 1];
        }
    }
    for(int i = 0; i < n; i++){
        sum = sum + min(l[i] , r[i]) - arr[i];
    }
    cout<<sum;
    return 0;
}