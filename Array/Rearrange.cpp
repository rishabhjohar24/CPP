//Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n,temp,j;
//     cin>>n;
//     int a[n],t[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         t[i] = a[i];
//     }
//     int even,odd;
//     even = n/2;
//     odd = n-even;
//     sort(t, t + n);
//     j= odd-1;
// //filling the odd posiotion
//     for(int i=0; i<n; i+=2){
//         a[i] = t[j];
//         j--;
//     }
//     //Filling even position
//     j = odd;
//     for(int i=1; i<n; i+=2){
//         a[i] = t[j];
//         j++;
//     }
//     for (int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

//Rearrange array such that even index elements are smaller and odd index elements are greater

// int main(){
//     int n,temp;
//     cin>>n;
//     int a[n],t[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         t[i] = a[i];
//     }
//     sort(t, t+n);
//     int even, odd, j;
//     even = n/2;
//     odd = n - even;
//     //Filling odd indexes 
//     j = odd ;
//     for (int i=1; i<n; i+=2){
//         a[i] = t[j];
//         j++;
//     }
//     //Filling Even Indexes
//     j = odd -1;
//     for (int i=0; i<n; i+=2){
//         a[i] = t[j];
//         j--;
//     }
//     for(int i=0; i<n; i++){
//         cout<<a[i];
//     }
//     return 0;
// }

//Find the minimum element in a sorted and rotated array

//_______________ wRONG OUTPUT_____________________

// int minn(int arr[], int low, int high){
//     if(high < low){
//         return arr[0];
//     }
//     if(high = low){
//         return arr[low];
//     }
//     int mid = (low+high)/2;
//     if(mid < high && arr[mid] > arr[mid+1]){
//         return arr[mid+1];
//     }
//     if(mid>low && arr[mid]<arr[mid-1]){
//         return arr[mid];
//     }
//     if(arr[high]> arr[mid]){
//         return minn(arr, low, mid-1);
//         return minn(arr, mid+1, high);
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     cout<<minn(a,0,n-1);
//     return 0;
// }

//Move all zeroes to end of array

void mov(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[count++] = arr[i];
        }
    }
    while(count<n){
        arr[count++] = 0;
    }
}

int main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    mov(a, n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}