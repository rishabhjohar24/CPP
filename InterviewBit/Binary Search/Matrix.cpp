//Matrix Search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, B, temp;
    vector<vector<int>> A;
    cin>>n>>m>>B;
    for(int i = 0; i < n; i++){
        vector<int> b;
        for(int j = 0; j < m; j++){
            cin>>temp;
            b.push_back(temp);
        }
        A.push_back(b);
    }
    vector<int> arr;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            temp = A[i][j];
            arr.push_back(temp);
        }
    }
    int low, high, mid, flag = 0;
    low = 0; 
    high = ((n * m) - 1);
    while(high >= low){
        mid = (high + low) / 2;
        if(arr[mid] == B){
            cout<<"1";
            flag = 1;
            break;
        }
        else if(arr[mid] > B){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(flag == 0){
        cout<<"0";
    }
    return 0;
}


//---------------SLOW APPROACH------------------- 
// int f_nd(int arr[][], int num, int n, int m){
   
// // }
// int main(){
//     int n, m, num;
//     cin>>n>>m>>num;
//     int arr[n][m];
//     for (int i=0; i<n; i++){
//         for (int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//      int temp = 0;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<m; j++){
//             if(arr[i][j] == num){
//                 temp = 1;
//                 cout<<"SUCCESS";
//                 return 1;
//             }
//         }
//     }
//     if(temp == 0){
//         cout<<"FAILURE";
//         return 0;
//     }
//     // f_nd(arr, num, n, m);
//     return 0;
// }
//---------------------------Better Way------------------


// int main(){
//     int n,m,B,temp=0, low, high, mid, i, j,flag=0;
//     cin>>n>>m>>B;
//     int A[n][m];
//     for( i=0; i<n; i++){
//         for( j=0; j<m; j++){
//             cin>>A[i][j];
//         }
//     }
//     i = 0;
//     j = m-1;
//     low = 0;
//     high = m-1;
//     while(temp != B && i<n){
//         if(A[i][j] == B){
//             cout<<"SUCCESS";
//             temp = A[i][j];
//             break;
//         } 
//         else if(A[i][j] < B){
//             i++;
//         }
//         else if(A[i][j] > B){
//             while(low <= high){
//                 mid = (low + high)/2;
//                 if (A[i][mid] == B){
//                     cout<<"SUCCESS";
//                     temp = A[i][mid];
//                     flag = 1;
//                     break;
//                 }
//                 else if(A[i][mid] < B){
//                     high = mid - 1;
//                 }
//                 else if (A[i][mid] > B){
//                     low = mid + 1;
//                 }
//             }
//             if (flag == 0){
//                 cout<<"FAILURE";
//             }
//             break;
//         } 
//     }
//     if(temp != B && i == n-1 && j == m-1){
//             cout<<"FAILURE";
//         }
//     return 0;
// }