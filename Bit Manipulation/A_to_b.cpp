#include<bits/stdc++.h>
using namespace std;
int countSetBits(int a, int b){
    int x, count = 0;
    x = a ^ b;
    while(x > 0){
        count++;
        x &= (x - 1);
    }
    return count;
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<countSetBits(a, b);
    return 0;
}