#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,j=0,k;
    cin>>n>>k;
    int a[n][n] = {};
    for(i=0; i<n; i++){
        a[i][j] = 1;
    }
    for(i=1; i<n; i++){
        for(j=1; j<i+1; j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for( i=0; i<n; i++){
        if(a[k-1][i]>0){
            cout<<a[k-1][i]<<" ";
        }        
    }
    return 0;
}