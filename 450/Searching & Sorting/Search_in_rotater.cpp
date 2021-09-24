#include<bits/stdc++.h>
#define ll long long
using namespace std;
int rot(int *arr, int nums, int l, int r){
    if(l > r){
        return -1;
    }
    int mid = (l + r) / 2;
    if(arr[mid] == nums){
        return mid;
    }
    if(arr[mid] >= nums){
        if(nums >= arr[l] && nums <= arr[r]){
            return rot(arr, nums, l, mid - 1);
        }
        return rot(arr, nums, mid + 1, r);
    }
    if(nums >= arr[mid] && nums <= arr[r]){
        return rot(arr, nums, mid + 1, r);
    }
    return rot(arr, nums, l, mid - 1);
}
int main(){
    int n, nums;
    cin>>n>>nums;
    int *arr = new (int);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<rot(arr, nums, 0, n - 1);
    return 0;
}