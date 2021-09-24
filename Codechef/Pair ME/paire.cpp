#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int x, y, z;
        cin>>x>>y>>z;
        if(y + z == x){
            cout<<"YES"<<endl;
        } 
        else if(z + x == y){
            cout<<"YES"<<endl;
        }
        else if(x + y == z){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}