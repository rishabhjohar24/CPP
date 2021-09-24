#include<bits/stdc++.h>
using namespace std;
int Search(int arr[], int low, int high, int x){
    if(high >= low){
        int mid = (low + high)/2;
        if (x == arr[mid]){
            return arr[mid];
        }else if(x < arr[mid]){
            return Search(arr, low, mid-1, x);
        }else if(x > arr[mid]){
            return Search(arr, mid+1, high, x);
        }
    }
    return -1;    
}
int main(){
    int n,flag;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cin>>flag;
    cout<<Search(a, 0, n-1, flag);
    return 0;
}