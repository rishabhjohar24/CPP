#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, flag = 0, loop_flag = 0;
        string s ;
        char temp;
        cin>>n;
        cin>>s;
        unordered_map<char, bool> has;
        for(int k = 0; k < s.size(); k++){
            temp = s[k];
            if(has.find(temp) != has.end()){
                cout<<"NO\n";
                flag = 1;
                break;
            }
            else{
                has[temp] = true;
                while(temp == s[k]){
                    k++;
                    // loop_flag = 1;
                }
                // if(loop_flag == 1){
                //     k--;
                //     loop_flag = 0;
                // }
            }
        }
        if(flag != 1){
            cout<<"YES\n";
        }
    }
    return 0;
}