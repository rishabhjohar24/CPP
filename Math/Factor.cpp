#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count = 0;
    cin>>n;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(n / i != i){
                cout<<i<<" ";
            }            
        }
    }
    for(int i = sqrt(n); i >= 1; i--){
        if(n % i == 0){
            cout<<n / i<<" ";
        }
    }
    return 0;
}