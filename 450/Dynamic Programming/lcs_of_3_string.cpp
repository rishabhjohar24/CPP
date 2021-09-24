#include<bits/stdc++.h>
using namespace std;
int lcs3(string x, string y, string z){
    int n = x.size(), m = y.size(), p = z.size();
    int t[n + 1][m + 1][p + 1];
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            for(int k = 1; k <= p; k++){
                if((x[i - 1] == y[j - 1]) &&(x[i - 1] == z[k - 1]) &&(y[j - 1] == z[k - 1])){
                    t[i][j][k] = 1 + t[i - 1][j - 1][k - 1];
                }
                else{
                    t[i][j][k] = max(t[i - 1][j][k], max(t[i][j][k - 1], t[i][j - 1][k]));
                }
            }
        }
    }
    return t[n][m][p];
}
int main(){
    string a, b, c;
    cin>>a>>b>>c;
    cout<<lcs3(a, b, c);
    return 0;
}