#include<iostream>
using namespace std;
int main(){
    long r, o ,c;
    cin>>r>>o>>c;
    //r = team a runs
    //o = played overs by team b
    //c = team b score in o overs
    o = (20 - o) * 6;
    c = c + (o * 6);
    if(c > r){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}