#include<bits/stdc++.h>
using namespace std;
int pai_r(int arr[], int n, int x){
    unordered_map<int , int> a;
    int target;
    for(int i = 0; i < n; i++){
        a[arr[i]] = 1;
    }
    for(int i = 0; i < n; i++){
        target = x / arr[i];
        if(a[target] == 1){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<pai_r(arr, n, k);
    return 0;
}