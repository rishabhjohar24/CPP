#include<iostream>
using namespace std;
int main(){
    int n, n1, res=0, temp=0;
    cin>>n;
    n1 = n;
    while(n>0){
        temp = n % 10;
        res = res*10 + temp ;
        n = n/10;
    }
    cout<<res;
    if(res == n1){
        cout<<"True";
    }else if(res != n1){
        cout<<"False";
    }
    return 0;
}