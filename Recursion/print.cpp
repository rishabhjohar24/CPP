#include<bits/stdc++.h>
using namespace std;
void dec(int n){
    if(!n){
        return;
    }
    cout<<n<<" ";
    dec(n - 1);
    return;
}
void inc(int n){
    if(!n){
        return;
    }
    inc(n - 1);
    cout<<n<<" ";
    return;
}
int main(){
    int n;
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}