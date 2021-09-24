#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int l = -1, temp;
    for(int i = 0; i< n; i++){
        if(arr[i] < 0){
            l++;
            temp = arr[i];
            arr[i] = arr[l];
            arr[l] = temp;
        }
    }
    int r = l + 1;
    l = 1;
    while(l != r){
        swap(arr[l], arr[r]);
        l += 2;
        r++;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr + n);
//     int l , r;
//     for(int i = 0; i < n; i++){
//         if(arr[i] >= 0){
//             r = i;
//             break;
//         }
//     }
//     l = 1;
//     r = r;
//     while(r <= n && r > 1){
//         swap(arr[l], arr[r]);
//         l += 2;
//         r += 2;
//     }
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }