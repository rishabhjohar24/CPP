#include<bits/stdc++.h>
using namespace std;
bool sequencePatternMatching(string x, string y, int n, int m){
    int t[n + 1][m + 1];
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(x[i - 1] == y[j - 1]){
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else{
                t[i][j] = max(t[i][j - 1], t[i - 1][j]);
            }
        }
    }
    int val = min(m , n);
    if(val == t[n][m]){
        return true;
    }
    return false;
}
int main(){
    string x, y;
    cin>>x>>y;
    if(sequencePatternMatching(x, y, x.size(), y.size())){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}