#include<iostream>
using namespace std;
int main(){
    int x, d;
    cin>>x>>d;
    cout<<(x & (d - 1));
    return 0;
}