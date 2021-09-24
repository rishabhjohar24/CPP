#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    string s,p;
    cin>>s;
    string r = s.substr(0,3);
    s = s.erase(0, 3);
    cout<<r<<endl<<s<<endl;
    p = s.find(r);
    cout<<p;
    if(p == "ram"){
        cout <<"yes";
    } else {
        cout<< "No";
    }
    
    return 0;
}