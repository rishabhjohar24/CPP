#include<bits/stdc++.h>
#define INT_MAX 32
using namespace std;
int left(int n, int d){
    return (n << d)|(n >> (INT_MAX - d));
}
int risght(int n, int d){
    return (n >> d)|(n << (INT_MAX - d));
}
int main(){
    int n, d;
    cin>>n>>d;
    cout<<left(n , d);
    cout<<risght(n , d);
    return 0;
}