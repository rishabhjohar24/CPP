#include<bits/stdc++.h>
using namespace std;
int roadCutting(int wt[], int val[], int n, int w){
    int t[n+1][w+1] = {0};
    for(int i = 1; i <+ n; i++){
        for(int j = 1; j <= w; j++){
            if(wt[i - 1] > j){
                t[i][j]= t[i - 1][j];
            }
            else{
                t[i][j] = max(t[i][j - wt[i - 1]] + val[i - 1], t[i - 1][j]);
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
        cin>>wt[i];
    }
    for(int i = 0; i < n; i++){
        cin>>val[i];
    }
    cout<<roadCutting(wt, val, n, w);
    return 0;
}