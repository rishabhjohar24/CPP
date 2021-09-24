#include<bits/stdc++.h>
using namespace std;

int LongestPalindromicSubsequence(string x, string y, int n, int m){
    int t[n+1][m+1];
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(x[i-1] == y[j - 1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return t[n][m];
}

int main(){
    string x, y;
    cin>>x;
    for(int i = x.length() - 1; i >= 0; i--){
        y = y + x[i];
    }
    cout<<LongestPalindromicSubsequence(x, y, x.length(), y.length());
    return 0;
}