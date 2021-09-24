#include<bits/stdc++.h>
using namespace std;
int lpr(string x, int n){
    int t[n + 1][n + 1];
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(x[i - 1] == x[j - 1] && (i != j)){
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else{
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    return t[n][n];
}
int main(){
    string x;
    int n;
    cin>>x;
    n = x.size();
    cout<<lpr(x, n);
    return 0;
}