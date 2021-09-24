//Minimum number of insertion and deletion to convert string a to b
#include<bits/stdc++.h>
using namespace std;
int AtoB(string x, string y, int n, int m){
    int t[n+1][m+1], result = INT_MIN;
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(x[i - 1] == y[j - 1]){
                t[i][j] = 1 + t[i - 1][j - 1];
                result = max(result, t[i][j]);
            }
            else{
                t[i][j] = 0;
            }
        }
    }
    return m + n - (2*result);
}
int main(){
    string x, y;
    cin>>x>>y;
    cout<<AtoB(x, y, x.length(), y.length());
    return 0;
}