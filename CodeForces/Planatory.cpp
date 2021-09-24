#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j = 0; j < t; j++){
        int i = 0, u = 0, d = 0, l = 0, r = 0, x, y;
        string s;
        cin>>x>>y;
        cin>>s;
        if(x > 0 && y > 0){
            r = x;
            u = y;
            while(i < s.length()){
                if(s[i] == 'U'){
                    u--;
                } else if(s[i] == 'R'){
                    r--;
                }
                i++;
                if(u == 0 && r == 0){
                    break;
                }
            }
            if(r == 0 && u ==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(x > 0 && y < 0){
            r = x;
            d = abs(y);
            while(i < s.length()){
                if(s[i] == 'R'){
                    r--;
                } else if(s[i] == 'D'){
                    d--;
                }
                i++;
                if(r == 0 && d == 0){
                    break;
                }
            }
            if(r == 0 && d ==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(x < 0 && y < 0){
            l = abs(x);
            d = abs(y);
            while(i < s.length()){
                if(s[i] == 'L'){
                    l--;
                } else if(s[i] == 'D'){
                    d--;
                }
                i++;
                if(l == 0 && d == 0){
                    break;
                }
            }
            if(l == 0 && d == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(x < 0 && y > 0){
            l = abs(x);
            u = y;
            while(i < s.length()){
                if(s[i] == 'L'){
                    l--;
                } else if(s[i] == 'U'){
                    u--;
                }
                i++;
                if(l == 0 && u == 0){
                    break;
                }
            }
            if(l == 0 && u == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}



//for(int i = 0; i < s.length(); i++){
        //     if(s[i] == 'R'){
        //         xi = xi + 1;
        //         yi = yi;
        //     }
        //     else if(s[i] == 'L'){
        //         xi = xi - 1;
        //         yi = yi;
        //     }
        //     else if(s[i] == 'D'){
        //         xi = xi;
        //         yi = yi - 1;
        //     }
        //     else if(s[i] == 'U'){
        //         xi = xi;
        //         yi = yi + 1;
        //     }
        // }