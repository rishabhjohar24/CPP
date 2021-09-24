//Useless Code
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n, count = 0;
    n = s.length();
    for (int i = 0; i < n; i++){
        if(s[i] == '1'){
            count++;
        }
    }
    cout<<count;
    return 0;
}