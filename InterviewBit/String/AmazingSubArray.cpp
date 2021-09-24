#include<bits/stdc++.h>
using namespace std;
int main(){
    string A;
    long long int n, x = 0;
    cin>>A;
    for(long int i = 0; i < A.length(); i++){
        if(A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U' || A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' ){
            n = A.length() - i;
            x = x + n;
        }
    }
    x = x % 10003;
    cout<<x;
    return 0;
}