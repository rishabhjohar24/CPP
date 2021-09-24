#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char, int> maping;
    int n = s.size();
    for(int i = 0; i < n; i++){
        maping[s[i]]++;
    }
    for(auto i : maping){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}