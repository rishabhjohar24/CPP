#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int m = 1;
    while(x & m){
        x = x ^ m;
        m <<= 1;
    }
    x = x ^ m;
    cout<<x;
    return 0;
}