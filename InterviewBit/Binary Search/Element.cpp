//Smaller or equal elements
#include<bits/stdc++.h>
using namespace std;
int bin(int arr[], int low, int high, int size, int val){
    int count=0;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] <= val){
            count = count + mid - low + 1;
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    return count;
}
int main(){
    int n,val;
    cin>>n>>val;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<bin(arr, 0, n-1, n, val);
    return 0;
}
//---------------------------------------------------------
// #include<iostream>
// using namespace std;
// int find(int arr[], int low, int high, int size, int num)
// {
//     int mid,count=0;
//     mid = low + (high - low)/2;
//     if(arr[mid] <= num){
//         count = mid+1;
//         find(arr, mid+1, high, size, num);
//     }
//     else if(arr[mid] > num ){
//         find(arr, low, mid-1, size, num);
//     }
//     cout<<count;
//     return 0;
// }
// int main(){
//     int n,val;
//     cin>>n>>val;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     find(arr, 0, n-1, n, val);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int bin(int arr[], int low, int high, int val){
//     if(high >= low){
//         int mid = low + (high - low)/2;
//         int track = 0,count = 0;
//         if(arr[mid] == val){
//             count = mid;
//             track = mid + 1;
//             while(arr[track] == val ){
//                 count++;
//                 track++;
                
//             }
//         }
//         else if(arr[mid] < val){
//             bin(arr, mid+1, high, val);
//         }
//         else if(arr[mid] > val){
//             bin(arr, low, mid-1, val );
//         }
//     }
// }
// int main(){
//     int n,val;
//     cin>>n>>val;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<bin(arr, 0, n-1, val);
//     return 0;
// }
