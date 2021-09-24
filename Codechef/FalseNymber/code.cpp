#include<bits/stdc++.h>
using namespace std;
string sol(string s){
    string p;
    if(s[0] == '1'){
        p = "10";
        for(int i=1;i<s.size();i++){
            p += s[i];
        }
        
    }
    else{
        p += '1' + s;
    }
    return p;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<sol(s)<<endl;
    }
    return 0;
}