#include<iostream>
using namespace std;
int main(){
    int a,b,t,rem;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        rem = a%b;
        cout<<rem;
    }
    return 0;
}