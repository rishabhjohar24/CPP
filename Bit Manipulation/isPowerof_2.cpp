#include<iostream>
using namespace std;
bool isPowerOf2(int n){
    if((n & (n - 1)) == 0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerOf2(n);
    return 0;
}