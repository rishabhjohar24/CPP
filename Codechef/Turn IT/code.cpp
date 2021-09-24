#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long double vel, u, a, s;
        cin>>vel>>u>>a>>s;
        long double look = pow(((pow(vel, 2))- (2 * acc *disp)), 0.5);
        if(look > u){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}