#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    unordered_map<int, int> hash;
    for(int i = 0; i < n; i++){
        hash[arr[0][i]]++;
    }
    for(int i = 1; i < n - 1; i++){
        for(int j = 0; j < n; j++){
            if((hash.find(arr[i][j]) != hash.end()) && hash[arr[i][j]] == i){
                hash[arr[i][j]]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if((hash.find(arr[n - 1][i]) != hash.end()) && (hash[arr[n - 1][i]] == n - 1)){
            cout<<arr[n - 1][i]<<" ";
        }
    }
    return 0;
}