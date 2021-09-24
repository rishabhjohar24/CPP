#include<bits/stdc++.h>
using namespace std;
void msis(int arr[], int n){
    int msis[n];
    for(int i = 0; i < n; i++){
        msis[i] = arr[i];
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(arr[i] > arr[j] && msis[i] < msis[j] + arr[i]){
                msis[i] = msis[j] + arr[i];
            }
        }
    }
    cout<<*max_element(msis, msis + n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i]; 
    }
    msis(arr, n);
    return 0;
}