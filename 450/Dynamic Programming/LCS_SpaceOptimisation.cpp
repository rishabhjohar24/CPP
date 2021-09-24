#include<bits/stdc++.h>
using namespace std;
int lcs(string x, string y){
    int n = x.size(), m = y.size();
    int t[2][m + 1];
    memset(t, 0, sizeof(t));
    bool k;
    for(int i = 1; i <= n; i++){
        k = i & 1;
        for(int j = 1; j <= m; j++){
            if(x[i - 1] == y[j - 1]){
                t[k][j] = 1 + t[1 - k][j - 1];
            }
            else{
                t[k][j] = max(t[1 - k][j], t[k][j - 1]);
            }
        }
    }
    return t[k][m];
}
int main(){
    string a, b;
    cin>>a>>b;
    cout<<lcs(a, b);
    return 0;
}