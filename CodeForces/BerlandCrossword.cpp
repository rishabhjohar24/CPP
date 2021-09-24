#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, u, r, d, l;
        cin>>n>>u>>r>>d>>l;
        int arr[n][n];
        arr[0][0] = 1;
        arr[0][n - 1] = 1;
        arr[n - 1][n - 1] = 1;
        arr[n - 1][0] = 1;
    }
}