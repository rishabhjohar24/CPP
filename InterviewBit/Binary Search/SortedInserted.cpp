//Sorted Insert Position

//------------Slower Approach------------------
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, l, r, mid, flag=0;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    l=0; 
    r= n-1;
    while(r >= l){
        mid = (l + r)/2;
        if (arr[mid] == x){
            cout<<mid;
            flag = 1;
            break;
        }
        else if(arr[mid] > x){
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    if (flag == 0){
        int upper = upper_bound(arr, arr+n, x) - arr;
        cout<<upper;
    }
    return 0;
}