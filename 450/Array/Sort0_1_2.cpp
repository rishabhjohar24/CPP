#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int temp0 = 0, temp1 = 0, temp2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            temp0++;
        }
        else if(arr[i] == 1){
            temp1++;
        }
        else {
            temp2++;
        }
    }
    for(int i = 0; i < temp0; i++){
        arr[i] = 0;
    }
    for(int i = temp0; i <temp0 + temp1; i++){
        arr[i] = 1;
    }
    for(int i = temp0 + temp1; i < temp0 + temp1 + temp2; i++){
        arr[i] = 2;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}