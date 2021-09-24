#include<iostream>
using namespace std;
int main(){
    int x , y;
    double bal;
    cin>>y>>x;
    if(y % 5 == 0 && x > y){
        bal = x - y - 0.50;
        cout<<bal<<endl;
    }
    else{
        bal = x;
        cout<<bal<<endl;
    }
    return 0;
}