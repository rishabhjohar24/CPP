//--------USING MEMORISATION-------------
#include<bits/stdc++.h>
using namespace std;
bool partition(int arr[], int n, int sum){
    if(sum == 0){
        return true;
    }
    if(n == 0 && sum != 0){
        return false;
    }
    if(arr[n-1] > sum){
        return partition(arr, n - 1, sum);
    }
    return partition(arr, n - 1, sum - arr[n - 1]) || partition(arr, n - 1, sum);
}



//------USING TABULATION-----------------

// #include<bits/stdc++.h>
// using namespace std;

// bool partition(int arr[], int n, int sum){
//     bool t[n+1][sum+1];
//     for(int i = 0; i < n + 1; i++){
//         t[i][0] = true;
//     }
//     for(int j = 1; j < sum + 1; j++){
//         t[0][j] = false;
//     }
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= sum; j++){
//             if(arr[i - 1] > j){
//                 t[i][j] = t[i-1][j];
//             }
//             else{
//                 t[i][j] = t[i-1][j - arr[i-1]] || t[i-1][j];
//             }
//         }
//     }
//     return t[n][sum];
// }

int main(){
    int n, sum = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    if(sum % 2 != 0){
        cout<<"NO";
    }
    else{
        if(partition(arr, n, sum / 2)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}