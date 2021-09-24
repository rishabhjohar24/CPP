#include<bits/stdc++.h>
using namespace std;
string remove(string s){
    if(!s.size()){
        return "";
    }
    return (s[0] == s[1]) ? remove(s.substr(1)) : s[0] + remove(s.substr(1));
}
int main(){
    string s;
    cin>>s;
    cout<<remove(s);
    return 0;
}