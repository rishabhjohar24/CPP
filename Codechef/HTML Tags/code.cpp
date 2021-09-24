#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int flag = 0;
        string s, temp;
        cin>>s;
        temp = s[0] + s[1];
        if(temp != "</"){
            flag = 1;
            cout<<"Error\n";
        }
        for(int i = 2; i < s.size() - 2 && flag == 0; i++){
            if()
        }
        if(s[s.size() - 1] == '>' && flag == 0){
            cout<<"Error\n";
        }
    }
    return 0;
}