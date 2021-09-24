#include<iostream>
#include<algorithm>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, m, count = 0;
        cin>>n>>m;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        unordered_map<int, int> A;
        for(int i = 0; i < n; i++){
            if(A.find(arr[i]) == A.end()){
                A[arr[i]]++;
                count++;
            }
        }
        count = m - count;
        if(count > 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}