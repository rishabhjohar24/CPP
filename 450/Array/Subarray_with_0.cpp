#include<bits/stdc++.h>
using namespace std;
bool Sub_Zero(int arr[], int n){
    int sum = 0;
    unordered_map <int, int> A;
    for(int i = 1; i < n; i++){
        sum += arr[i];
        if(sum == 0 || A.find(sum) != A.end()){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    (Sub_Zero(arr, n)) ? (cout<<"YES") : (cout<<"NO");
    return 0;
}