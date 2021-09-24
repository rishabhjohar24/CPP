#include<bits/stdc++.h>
using namespace std;
int first(int arr[], int n){
    int local_index = INT_MAX, global_index = INT_MAX; 
    int hash[100000] = {0};
    for(int i = 0; i < n; i++){
        if(hash[arr[i]] != 0){
            local_index = hash[arr[i]];
            if(local_index < global_index){
                global_index = local_index;
            }
        }
        else{
            hash[arr[i]] = i + 1;
        }
    }
    return arr[global_index - 1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<first(arr, n);
    return 0;
}