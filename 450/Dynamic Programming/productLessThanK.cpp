//------Kuch Bhi --------------

// #include<bits/stdc++.h>
// using namespace std;
// void lessK(int arr[], int n, int k){
//     int lis[n], mul[n];
//     for(int i = 0; i < n ; i++){
//         lis[i] = 1;
//         mul[i] = arr[i];
//     }
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j < i; j++){
//             if((lis[i] < lis[j] + 1) && (k > mul[i]*mul[j])){
//                 mul[i] = mul[i]*mul[j];
//                 lis[i] = lis[j] + 1;
//             }
//         }
//     }
//     cout<<*max_element(lis, lis + n);
// }
// int main(){
//     int n, k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     lessK(arr, n, k);
//     return 0;
// }