#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    unordered_map<int, int> map;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        map[arr[0][i]] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            if(map[arr[i][j]] == i){
                map[arr[i][j]] = i + 1;
                if(i == n - 1){
                    cout<<arr[i][j]<<" ";
                }
            }
        }
    }
    return 0;
}