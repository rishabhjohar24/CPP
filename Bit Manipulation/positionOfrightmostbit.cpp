#include<bits/stdc++.h>
using namespace std;
int pos(int n){
    return (log2(n & -n)) + 1;
}
int main(){
    int n;
    cin>>n;
    cout<<pos(n);
    return 0;
}