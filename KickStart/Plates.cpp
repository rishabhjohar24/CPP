#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int _sum(int arr[], int p){
    int sum = 0;
    for(int i = 0; i < p; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, k, p;
        cin>>n>>k>>p;
        int arr[n][k];
        for(int i = 0; i < k; i++){
           for(int j = 0; j < k; j++){
               cin>>arr[i][j];
           }
        }
    }
    return 0;
}