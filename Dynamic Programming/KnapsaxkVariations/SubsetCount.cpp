#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int sum){
    int t[n+1][sum+1] = {0};
    for(int i = 0; i < n + 1; i++){
        t[i][0] = 1;
    }
    for(int i = 1; i < sum + 1; i++){
        t[0][i] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(arr[i - 1] > j){
                t[i][j] = t[i - 1][j];
            }
            else{
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
            }
        }
    }
    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= sum; j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return t[n][sum];
}

int main(){
    int n, sum, x;
    cin>>n>>sum;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    x = count(arr, n, sum);
    cout<<x;
    return 0;
}