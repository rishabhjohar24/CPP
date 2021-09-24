#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(abs(a - b) == 0 || abs(b - c) == 0 || abs(c - a) == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}