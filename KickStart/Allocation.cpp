#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, count = 0, b;
        cin>>n>>b;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);
        for(int i = 0; i < n; i++){
            if(b < arr[i] || b <= 0){
                break;
            }
            else{
                b = b - arr[i];
                count++;
            }
        }
        cout<<"Case #"<<i + 1<<": "<<count<<endl;
    }
    return 0;
}