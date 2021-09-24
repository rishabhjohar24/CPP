#include<iostream>
using namespace std;
int merge(int arr[], int left, int right, int middle){
    int n1 = left;
    int n2 = right - middle;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     int inversion = 0;
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i + 1; j < n; j++){
//             if(arr[i] > arr[j]){
//                 inversion++;
//             }
//         }
//     }
//     cout<<inversion;
//     return 0;
// }