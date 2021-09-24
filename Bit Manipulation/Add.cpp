#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b, carry;
    int x = 0, y = 0, res;
    cin>>a>>b;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '1'){
            x = x + pow(2, i);
        }
    }
    cout<<x<<endl;
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '1'){
            y = y + pow(2, i);
        }
    }
    cout<<y<<endl;
    res = x + y;
    cout<<res<<endl;
    if(a.size() > b.size()){
        x = a.size();
    }
    else{
        x = b.size();
    }
    y = pow(2, x + 1);
    if((res & x) == 1){
        cout<<"1";
    }
    for(int i = x - 1; i >= 0; i--){
        y = pow(2, i);
        ((res & y) != 0) ? cout<<'1' : cout<<'0';
    }
    return 0;
}

// if(a.size() > b.size()){
    //     for(int i = 0; i < a.size() - b.size(); i++){
    //         b = '0' + b;
    //     }
    // }
    // else if(a.size() < b.size()){
    //     for(int i = 0; i < b.size() - a.size(); i++){
    //         a = '0' + a;
    //     }
    // }
    // for(int i = 0; i < a.size(); i++){
        
    // }