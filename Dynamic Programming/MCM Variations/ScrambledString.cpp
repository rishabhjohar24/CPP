#include<bits/stdc++.h>
using namespace std;
bool solve(string a, string b){
    if(a.length() != b.length()){
        return false;
    }
    if(a.compare(b) == 0){
        return true;
    }
    if(a.length() <= 1){
        return false;
    }
    bool flag = false;
    for(int i = 1; i < a.length() - 1; i++){
        if(solve(a.substr(0, i) ,b.substr(0, i)) || 
            solve(a.substr(i, a.length() - i), b.substr(i, a.length() - i))){
            flag = true;
            break;
        }
    }
    return flag;
}
int main(){
    string a, b;
    cin>>a>>b;
    if (solve(a, b)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}