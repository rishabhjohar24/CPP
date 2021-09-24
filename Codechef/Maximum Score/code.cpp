#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long max_score(long marks[], long time[], long n, long k){
    long arr[n + 1][k + 1];
    memset(arr, 0, sizeof(arr));
    for(long i = 1; i <= n; i++){
        for(long j = 1; j <= k; j++){
            if(time[i - 1] > j){
                arr[i][j] = arr[i - 1][j];
            }
            else{
                arr[i][j] = max(marks[i - 1] + arr[i - 1][j - time[i - 1]], arr[i - 1][j]);
                
            }
        }
    }
    long res = arr[n][k], min = INT_MAX;
    for(int i = n; i > 0 && res > 0; i--){
        if(res == arr[i - 1][k]){
            continue;
        }
        else{
            res = res - marks[i - 1];
            if(marks[i - 1] < min){
                min = marks[i - 1];
            }
        }
    }
    return arr[n][k] - min;
}

int main(){
    long test;
    cin>>test;
    for(long i = 0; i < test; i++){
        long n, k;
        cin>>n>>k;
        long marks[n], time[n];
        for(long i = 0; i < n ; i++){
            cin>>marks[i];
            cin>>time[i];
        }
        cout<<max_score(marks, time, n, k)<<endl; 
    }
    return 0;
}