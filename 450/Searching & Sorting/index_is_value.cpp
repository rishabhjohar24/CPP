#include<iostream>
using namespace std;
int main(){
    int n, val = -1;
    cin>>n;
    int* arr = new (int);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] == i + 1){
            val = i + 1;
        }
    }
    cout<<val;
    return 0;
}