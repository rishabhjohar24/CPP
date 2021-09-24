#include<bits/stdc++.h>
using namespace std;
int coinChange(int arr[], int n, int sum){
    int t[n+1][sum+1] = {0};
    for(int i = 0; i <= n; i++){
        t[i][0] = 1;
    }
    for(int i = 1; i <= sum; i++){
        t[0][i] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= sum; j++){
            if(arr[i - 1] <= j){
                t[i][j] = t[i][j - arr[i - 1]] + t[i - 1][j];
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}
int main(){
    int n, sum;
    cin>>n>>sum;
    int coin[n];
    for(int i = 0; i < n; i++){
        cin>>coin[i];
    }
    cout<<coinChange(coin, n, sum);
    return 0;
}