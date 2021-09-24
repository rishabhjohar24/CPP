#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        long k, n, avg;
        cin>>n>>k;
        if(n % k == 0){
            cout<<n / k<<" "<< k<<endl;
        }
        else {
            cout<<(n / k) + 1<<" "<<n - k * (n / k)<<endl;
        } 
    }
    return 0;
}