#include<bits/stdc++.h>
#define ll long long
using namespace std;
int max_min(int a, int b, int c){
    if(a > b){
        if(b > c){
            return b;
        }
        else if(a > c){
            return c;
        }
        return a;
    }
    else{
        if(a > c){
            return a;
        }
        else if(b > c){
            return c;
        }
    }
    return b;
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<middle(a, b, c);
    return 0;
}