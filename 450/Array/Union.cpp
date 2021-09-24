#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n], brr[m];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < m; i++){
        cin>>brr[i];
    }
    int un[n + m], j = INT_MIN;
    for(int i = 0; i < n + m; i++){
        if(i < n){
            un[i] = arr[i];
        }
        else{
            un[i] = brr[i];
        }
    }
    sort(un, un + n + m);
    for(int i = 0; i < n + m; i++){
        if(un[i] != j){
            cout<<un[i]<<" ";
            j = un[i];
        }
    }
    return 0;
}