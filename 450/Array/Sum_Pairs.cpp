#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    unordered_map<int, int> A;
    for(int i = 0; i < n; i++){
        A[arr[i]]++;
    }
    int diff, count = 0;
    for(int i = 0; i < n; i++){
        diff = k - arr[i];
        if(A.find(diff) != A.end()){
            count++;
        }
    }
    count = count / 2;
    cout<<count;
    return 0;
}