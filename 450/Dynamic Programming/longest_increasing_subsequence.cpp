#include<bits/stdc++.h>
using namespace std;
int _lis(vector<int>& arr){
    int n = arr.size();
    int lis[n] = {1};
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[i] > arr[j] && lis[i] < lis[j] + 1){
                lis[i] = lis[j] + 1;
            }
        }
    }  
    return *max_element(lis, lis + n);
}
int main(){
    vector<int> arr {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
    cout<<_lis(arr);
    return 0;
}