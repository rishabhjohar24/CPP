#include<bits/stdc++.h>
using namespace std;
string rev(string s){
    if(!s.size()){
        return "";
    }
    string k = rev(s.substr(1)) + s[0];
    return k;
}
int main(){
    string s;
    cin>>s;
    cout<<rev(s);
    return 0;
}