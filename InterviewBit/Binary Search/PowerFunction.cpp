//Implement Power Function
//find (x^n % d)

#include<bits/stdc++.h>
using namespace std;
int power(long long int x, long long int n,long long int d){
    if (n == 0 && x == 0){
        return 0;
    }
    if( n == 0){
        return 1;
    } 
    long long int temp, mul;
    temp = power(x, n / 2, d) % d;
    mul = (temp * temp ) % d;
    if(n % 2 == 0){
        return (mul) % d;
    }
    else{
        return (x * mul) % d;
    }
}
int main(){
    long long int x, n, d, val;
    cin>>x>>n>>d;
    val = power(x, n, d);
    if(val >= 0){
        cout<<val;
    }
    else {
        cout<<(d - abs(val));
    }
    return 0;
}
// int main(){
//     long long int x,n,d;
//     cin>>x>>n>>d;
//     long long int temp = 1;
//     if (x == 0){
//         cout<<"0";
//     }
//     for (int i=0; i<n; i++){
//         temp = (temp*x)%d;
//     }
//     if (temp<0){
//         cout<<(d-abs(temp));
//     }
//     else{
//         cout<<temp;
//     }
//     return 0;
// }

// int main(){
//     long long int x, c, d, temp=1,rem;
//     cin>>x>>c>>d;
//     for (int i=0; i<c; i++){
//         temp = x%d;
//     }
//         rem = temp%d;
//     if (rem<0){
//         cout<<(d-abs(rem));
//     }
//     else{
//         cout<<rem;
//     }
//     return 0;
// }

