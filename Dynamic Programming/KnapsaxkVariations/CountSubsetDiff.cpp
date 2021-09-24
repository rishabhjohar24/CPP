#include<bits/stdc++.h>
using namespace std;
int diffsetcount(int arr[], int n, int sum){
    int t[n+1][sum+1] = {0};
    for(int i = 0; i <= n; i++){
        t[i][0] = 1;
    }
    for(int i = 1; i <= sum; i++){
        t[sum][1] = 0;
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
    return t[n][sum];
}

int sums(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n, x, sum;
    cin>>n>>x;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sum = sums(arr, n);
    x = (x + sum)/2;
    x = diffsetcount(arr, n, x);
    cout<<x;
    return 0;
}