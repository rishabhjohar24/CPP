#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,d;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n>>d;
        int arr[n],temp = 1,flag = 1;
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        sort(arr, arr + n);
        for(int j=0; j<n; j++){
            if(arr[j] > d){
                temp = 0;
                break;
            }
        }
        if(temp != 0){
            cout<<"YES"<<endl;
            flag = 0;
        }
        if((arr[0] + arr[1]) <= d && flag != 0 ){
            cout<<"YES"<<endl;
        } else if(flag != 0 && (arr[0] + arr[1]) > d) {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}