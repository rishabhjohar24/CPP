#include<iostream>
#include<cstring>
using namespace std;
int Uknapsack(int wt[], int val[], int n, int w){
    int t[n + 1][w + 1];
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            if(j >= wt[i - 1]){
                t[i][j] = max(val[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][w];
}
int main(){
    int n, w;
    cin>>n>>w;
    int val[n], wt[n];
    for(int i = 0; i < n; i++){
        cin>>val[i];
    }
    for(int i = 0; i < n; i++){
        cin>>wt[n];
    }
    Uknapsack(wt, val, n, w);
}