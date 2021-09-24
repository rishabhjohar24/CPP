#include<bits/stdc++.h>
using namespace std;
int sum(int arr[], int brr[], int n){
    unordered_map<int , int> a;
    int val = 0;
    for(int i = 0; i < n; i++){
        a[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        a[brr[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(a[brr[i]] == 1){
            val = val + brr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[arr[i]] == 1){
            val = val + arr[i];
        }
    }
    return val;
}
int main(){
    int n;
    cin>>n;
    int arr[n], brr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        cin>>brr[i];
    }
    cout<<sum(arr, brr, n);
    return 0;
}