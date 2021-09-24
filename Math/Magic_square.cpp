#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x, y, n;
    cin>>n;
    x = n / 2;
    y = n - 1;
    long long int arr[n][n];
    memset(arr, 0, sizeof(arr));
    arr[x][y] = 1;
    for(int i = 2; i <= n * n ; i++){
        x = x - 1;
        y = y + 1;
        if(x == -1 && y == n){
            x = 0;
            y = n -2;
        }
        if(y == n){
            y = 0;
        }
        if(x < 0){
            x = n - 1;
        }
        if(arr[x][y] != 0){
            x = x + 1;
            y = y - 2;
        }
        arr[x][y] = i;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    x = n * (n * n + 1) / 2;
    cout<<"Magic Number = "<< x;
    return 0;
}