#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, temp, counte = 0, counto = 0;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 != 0){
                counto++;
            }
            else{
                counte++;
            }
        }
        if(counte > counto){
            cout<<counto<<endl;
        }
        else if(counte < counto){
            cout<<counte<<endl;
        }
        else{
            cout<<counte<<endl;
        }
    }
    return 0;
}