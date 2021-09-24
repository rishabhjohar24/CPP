#include<bits/stdc++.h>
using namespace std;
string pi(string s){
    if(!s.size()){
        return "";
    }
    string k = "";
    if(s[0] == 'p' && s[1] == 'i'){
        k = "3.14" + pi(s.substr(2));
    }
    else{
        k = s[0] + pi(s.substr(1));
    }
    return k;
}
int main(){
    string s;
    cin>>s;
    cout<<pi(s);
    return 0;
}