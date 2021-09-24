#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int len, strong, count = 0, flag = 0,ans_flag = 0;
        cin>>len>>strong;
        string s;
        cin>>s;
        for(int i = 0; i < len; i++){
            if(s[i] == '*'){
                while(s[i] == '*'){
                    i++;
                    count++;
                    flag = 1;
                }
            }
            if(count == strong){
                cout<<"YES"<<endl;
                ans_flag = 1;
                break;
            }
            if(flag == 1){
                flag = 0;
                i--;
            }
            count = 0;
        }
        if(ans_flag == 0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}