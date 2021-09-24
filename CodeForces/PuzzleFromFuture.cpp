#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int b, temp = 0, d, n;
        cin>>n>>b;
        int arr[n];
        for(int i = 0; i < n; i++){
                temp = temp*10 + 1;
        }
        temp = b + temp;
            for(int i = n-1; i >= 0 ; i--){
                arr[i] = temp % 10;
                temp = temp / 10;
            }
            for(int i = 0; i < n-1; i++){
                if(arr[i] == arr[i + 1]){
                    arr[i + 1] = arr[i + 1] - 1;
                }
            }
            temp = 0;
            for(int i = 0; i < n; i++){
                temp = temp*10 + arr[i];
        }
        d = temp - b;
        cout<<d;
    }
    return 0;
}