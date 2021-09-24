#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        long n, sum = 0, flag = 0;
        cin>>n;
        long arr[n];
        for(long i = 0; i < n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        for(long i = 0; i < n; i++){
            if(arr[i] == 2){
                flag = 1;
            }
        }
        if(sum % 2 == 0){
            cout<<"0"<<endl;
        }
        else if(sum % 2 != 0 && flag == 1){
            cout<<"1"<<endl;
        }
        else if(sum % 2 != 0 && flag == 0){
            cout<<"-1"<<endl;
        }
    }
    return 0;
}