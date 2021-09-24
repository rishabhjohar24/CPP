#include<bits/stdc++.h>
using namespace std;
string rev(string s){
    int i = 0, j = s.size() - 1;
    char temp;
    while(i < j){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}
bool isPalindrome(string s){
    if(s == rev(s)){
        return true;
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}