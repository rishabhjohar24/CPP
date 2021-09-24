#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    int* arr = new (int);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int l = 0, r = n - 1, mid, first, second;
    while(l <= r){
        mid = (l + r) / 2;
        if(arr[mid] > x){
            r = mid - 1;
        }
        else if(arr[mid] < x){
            l = mid + 1;
        }
        else{
            first = mid;
            r = mid - 1;
        }
    }
    l = 0, r = n - 1;
    while(l <= r){
        mid = (l + r) / 2;
        if(arr[mid] > x){
            r = mid - 1;
        }
        else if(arr[mid] < x){
            l = mid + 1;
        }
        else {
            second = mid;
            l = 1 + mid;
        }
    }
    cout<<first<<" "<<second;
    return 0;
}