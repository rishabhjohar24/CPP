#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, count = 0;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                count++;
            }
        }
        if(count == 0){
            cout<<"DRAW\n";
        }
        else if(count == 1 || count % 2 == 0){
            cout<<"BOB\n";
        }
        else if(count % 2 != 0 && count != 1){
            cout<<"ALICE\n";
        }
    }
    return 0;
}