#include<bits/stdc++.h>
using namespace std;
int divide(int A, int B){
    int quotient = 0, reminder;
    int sign = ((A < 0) ^ (B < 0)) ? -1 : 1;
    A = abs(A);
    B = abs(B);
    while(A >= B){
        A = A - B;
        quotient++;
    }
    reminder = A;
    return (sign * quotient);
}
int main(){
    int a, b, k;
    cin>>a>>b;
    k = divide(a, b);
    cout<<k;
    return 0;
}