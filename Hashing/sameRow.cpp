#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, r;
    cin>>m>>n>>r;
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    unordered_map<int, int> hash;
    for(int i = 0; i < n; i++){
        hash[arr[r][i]]++;
    }
    int flag = 1;
    for(int i = 0; i < m; i++){
        flag = 1;
        if(i == r){
            continue;
        }
        for(int j = 0; j < n; j++){
            if(hash.find(arr[i][j]) == hash.end()){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout<<i<<" ";
        }
    }
    return 0;
}