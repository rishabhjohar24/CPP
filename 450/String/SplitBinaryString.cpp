#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count0 = 0, count1 = 0, cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            count1++;
        }
        if(s[i] == '0'){
            count0++;
        }
        if(count0 == count1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}