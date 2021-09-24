#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, w;
    cin>>n>>w;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int t[n + 1][w + 1], len = 0;
    memset(t, 0, sizeof(t));
    vector<int> wt, val;
    for(int i = 0; i < n; i++){
        if(arr[i] != -1){
            val.push_back(arr[i]);
            wt.push_back(i + 1);
            len++;
        }
    }
    for(int i = 0; i < n + 1; i++){
        t[0][i] = INT_MAX;
    }
    for(int i = 1; i <= len; i++){
        for(int j = 1; j <= w; j++){
            if(wt[i - 1] <= j){
                t[i][j] = min(t[i - 1][j], val[i - 1] + t[i][j - wt[i - 1]]);
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    if(t[n][w] == INT_MAX){
        cout<<-1;
    }
    else{
        cout<<t[n][w];
    }
    return 0;
}