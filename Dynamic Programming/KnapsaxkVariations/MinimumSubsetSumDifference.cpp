#include<bits/stdc++.h>
using namespace std;
int minSubsetSumDifferenve(int arr[], int n, int sum){
    bool t[n+1][sum+1] = {false};
    for(int i = 0; i < n + 1; i++){
        t[i][0] = true;
    }
    for(int i = 1; i < sum + 1; i++){
        t[0][i] = false;
    }
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < sum + 1; j++){
            if(arr[i - 1] > j){
                t[i][j] = t[i - 1][j];
            }
            else {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
        }
    }
    int min = INT_MAX, temp; 
    // vector<int> A;
    // for(int i = 0; i <= sum / 2; i++){
    //     if(t[n][i] == true){
    //         A.push_back(i);
    //     }
    // }
    // for(int i = 0; i < A.size(); i++){
    //     temp = sum - 2*A[i];
    //     if(temp < min){
    //         min = temp;
    //     }
    // }
    for(int i = sum/2; i >= 0; i--){
        if (t[n][i] == true){
            min = sum - 2*i;
            break;
        }
    }
    return min;
}

int sums(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int min, n, sum;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sum = sums(arr, n);
    min = minSubsetSumDifferenve(arr, n, sum);
    cout<<min;
    return 0;
}


// for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= sum; j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;