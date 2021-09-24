#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin>>arr[i];
    }
    int val = arr[0];
    for(int i = 1; i < n; i++){
        val = val ^ arr[i];
    }
    cout<<val;
    return 0;
}