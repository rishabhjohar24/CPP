#include<bits/stdc++.h>
using namespace std;
bool isPower(unsigned long long  A){
    if(A == 1){
        return true;
    }
    for(int x = 2; x <= sqrt(A); x++){
        unsigned y = 2;
        unsigned long long p = pow(x, y);
        while(p <= A && p > 0){
            if(p == A){
                return true;
            }
            y++;
            p = pow(x, y);
        }
    }
    return false;
}
int main(){
    unsigned long long A;
    cin>>A;
    if(isPower(A)){
        cout<< "1";
    }
    else{
        cout<<"0";
    }
    return 0;
}

