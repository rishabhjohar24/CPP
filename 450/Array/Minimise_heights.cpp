#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    int small = arr[0] + k;
    int big = arr[n - 1] - k;
    if (small > big){
       swap(small, big);
    }
    for(int i = 1; i < n - 1; i++){
        int add = arr[i] + k;
        int sub = arr[i] - k;
        if(sub >= small || add <= big){
            continue;
        }
        if(big - sub <= add - small){
            small = sub;
        }
        else{
            big = add;
        }
    } 
    cout<<min(ans, big - small);
    return 0;
}