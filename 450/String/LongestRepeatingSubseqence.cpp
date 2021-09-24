#include<iostream>
int max(int x, int y){
    return (x > y) ? x : y;
}
using namespace std;
int lrs(string x, string y, int n, int m){
    int t[n + 1][m + 1];
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < m + 1; j++){
            t[i][j] = 0;
        }
    }
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < m + 1; j++){
            if(x[i - 1] == y[j - 1] && (i != j)){
                t[i][j] = 1 + t[i - 1][j];
            }
            else{
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    return t[n][m];
}
int main(){
    string s;
    cin>>s;
    cout<<lrs(s, s, s.size(), s.size());
    return 0;
}