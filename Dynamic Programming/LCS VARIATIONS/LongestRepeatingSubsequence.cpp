#include<bits/stdc++.h>
using namespace std;
int longestRepeatingSunSequence(string x, string y, int n, int m){
    int t[n + 1][m + 1];
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if((x[i - 1] == y [j - 1]) && (i != j)){
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else{
                t[i][j] = max(t[i][j - 1] , t[i - 1][j]);
            }
        }
    }
    return t[n][m];
}
int main(){
    string s;
    cin>>s;
    cout<<longestRepeatingSunSequence(s, s, s.size(), s.size());
    return 0;
}