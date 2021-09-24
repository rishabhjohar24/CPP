#include<bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
    cin>>r>>c;
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            arr[i][j] = i + j + 1;
        }
    }
    int count = 0, i = 0, j = 0;
    while(count != r*c){
        for(i; j<c && arr[i][j]!=0 && count!=(r*c); j++){
            cout<<arr[i][j]<<" ";
            arr[i][j] = 0;
            count++;
        }
        for
    }
}