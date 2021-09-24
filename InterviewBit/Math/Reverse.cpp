#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, n1, temp=0, res=0;
    cin>>n;
    n1 = n;
    n = abs(n);
    while(n>0){
        temp = n % 10;
        res = res*10 + temp;
        n = n / 10;
    }
    if(n > pow(2, 30)){
        cout<<"0";
    }
    if(n1 < 0){
        cout<<"-"<<res;
    } else {
        cout<<res;
    }
    return 0;
}