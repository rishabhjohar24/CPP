#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n;
    for(int i = 31; i >= 0; i--){
        x = pow(2, i);
        ((n & x) != 0) ? cout<<"1" : cout<<"0";
    }
    return 0;
}