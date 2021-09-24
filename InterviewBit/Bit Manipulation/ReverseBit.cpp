#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long int a, b[32], i = 0, temp;
    cin>>a;
    while(a > 0){
        temp = a % 2;
        b[i] = temp;
        a = a / 2;
        i++;
    }
    temp = 0;
    a = 1;
    for(int j = i; j < 32; j ++){
        b[j] = 0;
    }
    for(int j = 0; j < 32; j ++){
        cout<<b[j]<<" ";
    }
    for(int j = 31; j >= 0 ; j--){
        temp = temp + a*b[j];
        a = a*2;
    }
    cout<<"\n"<<"-----------------------------------------------\n"<<temp;
    return 0;
}




//----------Useless Program------------
// int main(){
//     unsigned long int a = INT_MAX, b;
//     a = a*2 + 1;
//     cin>>b;
//     b = a - b;
//     cout<<b;
//     return 0;
// }