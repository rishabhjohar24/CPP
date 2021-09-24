#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            arr[i] = i + 1;
        }
        for(int i = 0; i < n - 1; i += 2){
            swap(arr[i], arr[i + 1]);
        }
        if((n % 2)){
            swap(arr[n - 2], arr[n - 1]);
        }
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}