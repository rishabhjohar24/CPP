#include<bits/stdc++.h>
using namespace std;
string x_at_last(string s){
    if(!s.size()){
        return "";
    }
    string k = "";
    if(s[0] == 'x'){
        k = x_at_last(s.substr(1)) + 'x';
    }
}