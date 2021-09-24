#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, a, b, tm = 0;
        string s;
        cin>>n>>a>>b>>s;
        for(int i = 0; i < n; i++){
            tm += (s[i] == '1') ? b : a;
        }
        cout<<tm<<"\n";
    }
    return 0;
}