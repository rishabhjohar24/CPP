#include<bits/stdc++.h>
using namespace std;
int static t[1001][1001];
//---------Bottom UP--------------------
int matrixChainMultiplication(int arr[], int i, int j){
    if(t[i][j] != -1){
        return t[i][j];
    }
    if(i == j){
        return 0;
    }
    t[i][j] = INT_MAX;
    long long ans;
    for(int k = i; k < j; k++){
        t[i][j] = min(t[i][j], 
                    matrixChainMultiplication(arr, i, k) 
                        + matrixChainMultiplication(arr, k + 1, j) 
                            + arr[i - 1] * arr[k] * arr[j]);
    }
    return t[i][j];
}




//-----------Using recurssion-------------------------

// int matrixChainMultuplication(int arr[], int i, int j){
//     if(i >= j){
//         return 0;
//     }
//     long long min = INT_MAX, temp;
//     for(int k = i; k < j; k++){
//         cout<<"A"<<endl;
//         temp = matrixChainMultuplication(arr, i, k) + matrixChainMultuplication(arr, k + 1, j) + (arr[i - 1] * arr[k] * arr[j]);
//         cout<<"B"<<endl;
//         if(temp < min){
//             min = temp;
//         }
//     }
//     return min;
// }


int main(){
    memset(t, -1, sizeof(t));
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<matrixChainMultiplication(arr, 1, n - 1);
    return 0;
}