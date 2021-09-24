//Remove Consecutive Characters
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p;
    long int num, count = 1;
    cin>>s>>num;
    for (int i=0; i<s.length(); i++){
        if(s[i+1] == s[i]){
            
        }
        else {
            p = p + s[i];
        }
    }
    return 0;
}