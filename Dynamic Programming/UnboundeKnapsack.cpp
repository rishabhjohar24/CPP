#include<bits/stdc++.h>
using namespace std;
int unboundedSnapsack(int wt[], int val[], int n, int w){
    int t[n+1][w+1];
    memset(t, -1, sizeof(t));
    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < w + 1; j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }
            else if(wt[i-1] <= j){
                t[i][j] = max((val[i-1] + t[i][j-wt[i - 1]]), t[i-1][j]);
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= w; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return t[n][w];
}
int main(){
    int n, w;
    cin>>n>>w;
    int wt[n], val[n];
    for(int i = 0; i < n; i++){
        cin>>wt[i];
    }
    for(int i = 0; i < n; i++){
        cin>>val[i];
    }
    cout<<unboundedSnapsack(wt, val, n, w);
    return 0;
}