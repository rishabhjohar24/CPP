#include<bits/stdc++.h>
using namespace std;
int swpa(int n){
    int even = 0xAAAAAAAA;
    int odd = 0x55555555;
    even = n & even;
    odd = n & odd;
    even >>= 1;
    odd <<= 1;
    n = even | odd;
    return n;
}
int main(){
    int n;
    cin>>n;
    cout<<swpa(n);
    return 0;
}