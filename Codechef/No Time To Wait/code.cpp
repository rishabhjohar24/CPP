#include<bits/stdc++.h>
using namespace std;
void if_chef(int arr[], int n, int h, int x){
    int val = *max_element(arr, arr + n);
    if(val + x >= h){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int n, h, x;
    cin>>n>>h>>x;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    if_chef(arr, n, h, x);
    return 0;
}


//-------------BOTH ARE GOOD-------------

// int main(){
//     int n, h, x;
//     cin>>n>>h>>x;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     int ele = *max_element(arr, arr + n);
//     if(ele + x >= h){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }