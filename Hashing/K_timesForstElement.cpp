#include<bits/stdc++.h>
using namespace std;
int firstElementOccuringKtimes(int arr[], int n, int k){
    unordered_map<int, int> Ktimes;
    for(int i = 0; i < n; i++){
        Ktimes[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(Ktimes[arr[i]] == k){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<firstElementOccuringKtimes(arr, n, k);
    return 0;
}