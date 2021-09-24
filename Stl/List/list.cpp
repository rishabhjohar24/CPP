#include<iostream>
#include<string>
#include<list>
using namespace std;
int main(){
    list <int> l{22,2121,213213};
    list <string> ls{"India","Australia","America"};
    
    list <int> :: iterator p = l.begin();

    while(p!=l.end()){
        cout<<*p<<" "; 
        p++;
    };

    cout<<"Total values in the list are : "<<l.size()<<endl;

    // list <string> :: iterator k = ls.begin();

    // while(k!=ls.end()){
    //     cout<<*k<<" "; 
    //     k++;
    // };

    // cout<<"Total values in the list are : "<<ls.size()<<endl;

    return 0;
}