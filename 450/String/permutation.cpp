#include<bits/stdc++.h>
using namespace std;
void permutate(string s, int l, int r){
    if(l == r){
        cout<<s<<endl;
    }
    for(int i = l; i < r; i++){
        swap(s[i], s[l]);
        permutate(s, l + 1, r);
        swap(s[i], s[l]);
    }
}
int main(){
    string s;
    cin>>s;
    permutate(s, 0, s.size());
}