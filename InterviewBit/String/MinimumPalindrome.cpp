//Incomplete code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 0,l,r;
    string s,temp;
    cin>>s;
    temp = s;
    reverse(temp.begin(), temp.end());
    temp = temp + s;
    for(int i = 0; i < s.length(); i++){
        l = 0;
        r = temp.length() - 1;
        while(l < r){
            if(temp[l] == temp[r]){
                l++;
                r--;
            }
            else {
                break;
            }
        }
    }
    return 0;
}