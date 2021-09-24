#include<bits/stdc++.h>
using namespace std;
int has[1001][1];
void multipleRepeatingElements(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(has[arr[i]][0] == 0){
            has[arr[i]][0]++;
        }
        else{
            cout<<arr[i]<<" hash";
        }
    }
}
int main(){
    memset(has, 0, sizeof(has));
    int n;
    cin>>n;
    int arr[n + 1];
    for(int i = 0; i < n + 1; i++){
        cin>>arr[i];
    }
    multipleRepeatingElements(arr, n + 1);
    return 0;
}