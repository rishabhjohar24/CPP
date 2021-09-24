//wrong
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int r = INT_MIN, a, b, p, l, d;
        cin>>a>>b;
        l = b;
        d = a;
        if(b % 2){
            b /= 2;
            b++;
        }
        else{
            b /= 2;
        }
        cout<<b - (a / 2)<<"\n";
        for(int i = min(d, l); i <= max(d, l); i++){
            p = round(((l - i) / 2)) + round(((i - d) / 2));
            r = max(r, p);
            cout<<p<<" ";
        }
        cout<<r<<"\n";
    }
    return 0;
}