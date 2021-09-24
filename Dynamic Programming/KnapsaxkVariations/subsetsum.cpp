// --------USING TABULATION-----------------
#include<bits/stdc++.h>
using namespace std;
int subset(int arr[], int n, int sum){
    bool t[n+1][sum+1];
    for(int i = 0; i < n + 1; i++){
        t[i][0] = true;
    }
    for(int i = 1; i < sum + 1; i++){
        t[0][i] = false;
    }
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < sum + 1; j++){
            if(arr[i-1] <= j){
                t[i][j] = t[i - 1][j-arr[i-1]] || t[i - 1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][sum];
}
int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    if(subset(arr, n, sum)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}



//-------USING MEMORISATION--------------



// #include<bits/stdc++.h>
// using namespace std; 
// int t[1000][1000];
// int subset(int arr[], int n, int sum){
//     if(sum == 0){
//         return 1;
//     }
//     if(n <= 0){
//         return 0;
//     }
//     if(t[n - 1][sum] != -1){
//         return t[n - 1][sum];
//     }
//     if(sum < arr[n - 1]){
//         return t[n - 1][sum] = subset(arr, n - 1, sum);        
//     }
//     else{
//        return t[n - 1][sum] = subset(arr, n - 1, sum - arr[n - 1]) || subset(arr, n - 1, sum);
//     }    
// }
// int main(){
//     memset(t, -1, sizeof(t));
//     int n, sum;
//     cin>>n>>sum;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     if(subset(arr, n, sum)){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
//     return 0;
// }