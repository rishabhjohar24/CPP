#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        long long k = log2(n);
        k = pow(2, k) - 1;
        cout<<k<<endl;
    }
    return 0;
}