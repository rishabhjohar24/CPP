#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, k, pos, flag = 0;
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i < k; i++){
            int j = 0;
            while(arr[j + 1] <= arr[j] && j < n){
                j++;
            }
            if(j == n){
                cout<<-1;
                flag = 1;
                break;
            }
            else{ 
            arr[j] = arr[j] + 1;
            pos = j;
            }
            }
            if(flag != 1){  
            cout<<pos + 1<<endl;
            }  
            for(int i = 0; i<n; i++){
                cout<<arr[i]<<" ";
            }
        }
    return 0;
}