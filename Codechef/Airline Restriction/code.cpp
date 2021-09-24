#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0 ; i < t; i++){
        int a, b, c, d, e, flag = 1;
        cin>>a>>b>>c>>d>>e;
        if(a + b <= d && flag){
            if(c <= e){
                cout<<"YES\n";
                flag = 0;
            }
        }
        if(b + c <= d && flag){
            if(a <= e){
                cout<<"YES\n";
                flag = 0;
            }
        }
        if(c + a <= d && flag){
            if(b <= e){
                cout<<"YES\n";
                flag = 0;
            }
        }
        if(flag){
            cout<<"NO\n";
        }
    }
    return 0;
}