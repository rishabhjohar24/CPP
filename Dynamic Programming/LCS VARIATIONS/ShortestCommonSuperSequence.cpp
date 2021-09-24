#include<bits/stdc++.h>
using namespace std;
int lengthOfShortestCommonSuperSequence(string x, string y, int n, int m){
    int t[n + 1][m + 1];
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(x[i - 1] == y[j - 1]){
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else{
                t[i][j] = max(t[i -1][j], t[i][j - 1]);
            }
        }
    }
    return n + m - t[n][m];
}


int main(){
    string x, y;
    cin>>x>>y;
    cout<<lengthOfShortestCommonSuperSequence(x, y, x.length(), y.length());
    return 0;
}