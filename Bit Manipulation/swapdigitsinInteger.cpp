#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, q, r, x;
    cin>>n>>q>>r;
    a = n >> q;
    b = n >> r;
    a = a & 1;
    b = b & 1;
    x = a ^ b;
    x = (x << q) | (x << r);
    n = n ^ x;
    cout<<n;
    return 0;
}