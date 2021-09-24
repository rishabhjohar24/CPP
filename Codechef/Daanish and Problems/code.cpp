#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int a[10], k;
        for(int i = 0; i < 10; i++){
            cin>>a[i];
        }
        cin>>k;
        int index = 9;
        while(k >= 0){
            if(a[index] > k){
                cout<< index + 1 <<endl;
                break;
            }
            else{
                k = k - a[index];
                index--;
            }
        }
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int arr[10], k;
//         for(int i = 0; i < 10; i++){
//             cin>>arr[i];
//         }
//         cin>>k;
//         int j = 9;
//         while(k >= 0){
//             if(arr[j] > k){
//                 cout<< j + 1 <<endl;
//                 break;
//             }
//             else{
//                 k = k - arr[j];
//                 j--;
//             }
//         }
//     }
//     return 0;
// }