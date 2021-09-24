#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,j=0;
    cin>>n;
    int A[n][n] = {{0}};
    for(i=0; i<n; i++){
        A[i][j] = 1;
    }
    for(i=1; i<n; i++){
        for(j=1; j<i+1; j++){
            A[i][j] = A[i-1][j-1] + A[i-1][j];
        }
    }
    for( i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(A[i][j]>0){
                cout<<A[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}