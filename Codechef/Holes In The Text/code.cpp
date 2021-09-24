#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        string s;
        int holes = 0;
        cin>>s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'B'){
                holes = holes + 2;
            }
            else if(s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R'){
                holes = holes + 1;
            }
        }
        cout<<holes<<endl;
    }
    return 0;
}