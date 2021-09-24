#include<iostream>
using namespace std;
int kanpsackt(int a[], int b[], int n, int m){
    int t[n+1][w+1];
    memset(t, -1, sizeof(t));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }
            if(b[i - 1] <= j){
                t[i][j] = max(val[i - 1] + t[i - 1][j - b[i - 1]], t[i - 1][j]);
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][w];
} 
int knapsackr(int a[], int b[], int n, int w){
    if(w == 0 || n == 0){
        return 0;
    }
    if(w < b[n - 1]){
        return knapsackr(a, b, n - 1, w);
    }
    return max(a[n - 1] + knapsackr(a, b, n - 1, w - b[n - 1]), knapsack(a, b, n - 1, w));
}
int main(){
    int n, w;
    cin>>n>>w;
    int arr[n], we[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        cin>>we[i];
    }
    cout<<knapsackt(arr, we, n, w);
    return 0;
}