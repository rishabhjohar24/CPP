#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int gmax = INT_MIN, flag = 0, max_so_far = 1, min_so_far = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            max_so_far = max_so_far * arr[i];
            min_so_far = min(min_so_far * arr[i], 1);
            flag = 1;
        }
        else if(arr[i] == 0){
            max_so_far = 1;
            min_so_far = 1;
        }
        else{
            int temp = max_so_far;
            max_so_far = max(min_so_far * arr[i], 1);
            min_so_far = arr[i] * temp;
        }
        if(gmax < max_so_far){
            gmax = max_so_far;
        }
    }
    if(flag == 0 && max_so_far == 0){
        cout<<0;
    }
    else{
        cout<<gmax;
    }
    return 0;
}