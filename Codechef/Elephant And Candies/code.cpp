#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, c; 
        cin>>n>>c;
        int arr[n];
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i < n; i++){
            sum = sum + arr[i];
        }
        if(c >= sum){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}