#include<bits/stdc++.h>
using namespace std;
long long int a, b, c, d;
#define MOD 1000000007 
void nthFibonacci(int A, int res[]){
    if(A == 0){
        res[0] = 0;
        res[1] = 1;
        return;
    }
    nthFibonacci(A/2, res);
    a = res[0];
    b = res[1];
    c = 2 * b - a;
    if(c < 0){
        c = c + MOD;
    } 
    c = (c*a) % MOD;
    d = (a * a + b * b) % MOD;
    if(A % 2 == 0){
        res[0] = c;
        res[1] = d;
    }
    else{
        res[0] = d;
        res[1] = d + c;
    }
}
int main(){
    int A;
    cin>>A;
    int res[2] = {0};
    nthFibonacci(A, res);
    cout<<res[0];
    return 0;
}



// int nthFibonacci(int n){
//     int first = 1, second = 1, next;
//     // cout<<first<<" "<<second<<" ";
//     for(int i = 0; i < n - 2; i++){
//         next = second + first;
//         first = second  % (1000000000+7);
//         second = next  % (1000000000+7);
//         // cout<<next<<" ";
//     }
//     next = next % (1000000000+7); 
//     return next;
// }
// int main(){
//     int n;
//     cin>>n;
//     long long int k = nthFibonacci(n);
//     cout<<k;
//     return 0;
// }