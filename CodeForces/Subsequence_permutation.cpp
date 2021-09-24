#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        string s, k;
        int a = 0, n;
        cin>>n>>s;
        k = s;
        sort(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++){
            if(s[i] != k[i]){
                a++;
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}