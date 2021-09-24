#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
bool has[MAX + 1][2];
void insert(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            has[arr[i]][0] = 1;
        }
        else{
            has[abs(arr[i])][1] = 1;
        }
    }
}
bool find(int x){
    if(x >= 0){
        if(has[x][0] == 1){
            return true;
        }
    }
    else{
        if(has[abs(x)][1] == 1){
            return true;
        }
    }
    return false;
}
void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    memset(has, 0, sizeof(has));
    int n, x;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    insert(arr, n);
    print(arr, n);
    cin>>x;
    cout<<find(x);
    return 0;
}