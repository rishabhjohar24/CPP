#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int l = 0, p = n - 1;
        while(k > 0 && l < p){
            if(arr[l] > 0){
                arr[l] = arr[l] - 1;
                arr[p] = arr[p] + 1;
                k--;
            }
            else{
                l++;
            }
        }
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}