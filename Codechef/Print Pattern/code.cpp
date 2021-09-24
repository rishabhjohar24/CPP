#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int p=0; p<t; p++){
        int n,temp;
        cin>>n;
        temp = n+n-2;
        int a[n][n],b[temp];    
        for(int k=0; k<temp; k++){
            if(k<n-1){
                b[k]=k+1;
            } else if (k>=n-1){
                b[k]=temp-k;
            }
        }
        // for(int i=0; i<temp; i++){
        //     cout<<b[i]<<" ";
        // }
        a[0][0] = 1;
        for(int i=1; i<n; i++){
            a[i][0] = a[i-1][0]+(i+1);
        }
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                a[i][j] = b[i+j-1] + a[i][j-1];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}