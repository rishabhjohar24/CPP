#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s ;
    cin>>n;
    while(n){
        (n & 1) ? s += "1" :s += "0";
        n = n >> 1; 
    }
    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}