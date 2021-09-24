#include<iostream>
using namespace std;
int peak(int a[], int low, int high, int n){
    int mid;
    mid = low + (high - low)/2;
    if(n == 1){
        return a[0];
    }
    if(a[mid] >= a[mid-1] && a[mid]>=a[mid+1]){
        return mid;
    }
    else if(mid > 0 &&a[mid] < a[mid-1]){
        high = mid - 1;
        return peak(a, low , high, n);
    }
    else{
        low = mid + 1;
        return peak(a, low, high, n);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<peak(a, 0, n-1, n);
    return 0;
}