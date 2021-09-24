#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    k = pow(2, k - 1);
    n = n  ^ k;
    cout<<n;
    return 0;
}