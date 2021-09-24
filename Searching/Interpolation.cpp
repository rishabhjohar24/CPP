#include<bits/stdc++.h>
using namespace std;
int interpolation(int arr[], int x, int lo, int hi){
    int pos;
    while(lo <= hi && x >= arr[lo] && x <= arr[hi]){
        if(lo == hi){
            return lo;
            return -1;
        }
        pos = lo + (((double)((hi - lo)/arr[hi] - arr[lo])*(x-arr[hi])));
        if(arr[pos] > x){
            return interpolation(arr, x, lo, pos - 1);
        }else if(arr[pos] < x){
            return interpolation(arr, x, pos+1, hi);
        }
    }
    return -1;
}
int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    cout<<interpolation(arr, x, 0, n-1);
    return 0;
}