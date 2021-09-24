#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, temp;
    cin>>n>>m;
    vector<vector<int>> A;
    for(int i = 0; i < n; i++){
        vector<int> b;
        for(int j = 0; j < m; j++){
            cin>>temp;
            b.push_back(temp);
        }
        A.push_back(b);
    }
    int var;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            temp = A[i][j];
            arr.push_back(temp);
        }
    }
    sort(arr.begin(), arr.end());
    var = arr.size();
    if(var % 2 == 0){
        var = var / 2;
        cout<<arr[var - 1];
    }
    else{
        var = (var + 1) / 2;
        cout<<arr[var - 1];
    }
    return 0;
}