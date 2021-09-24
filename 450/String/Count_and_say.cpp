#include<bits/stdc++.h>
using namespace std;
string countandsay(int n){
    if(n == 1){
        return "1";
    }
    if(n == 2){
        return "11";
    }
    string s = "11";
    for(int i = 3; i <= n; i++){
        string s_temp = "";
        int count = 1;
        s += '$';
        for(int j = 1; j < s.size(); j++){
            if(s[j] != s[j - 1]){
                s_temp += count + '0';
                s_temp += s[j - 1];
                count = 1;
            }
            else{
                count++;
            }
        }
        s = s_temp;
    }
    return s;
}
int main(){
    string s;
    int n;
    cin>>n;
    s = countandsay(n);
    cout<<s.length();
    return 0;
}
// char c_temp = s[j];
//             int count = 1, flag = 1;
//             while(s[j] == c_temp){
//                 count++;
//                 j++;
//                 flag = 0;
//             }
//             if(flag == 0){
//                 j--;
//             }
//             l_temp = to_string(count) + c_temp;
//             s_temp.push_back(l_temp);