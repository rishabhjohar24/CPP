#include<bits/stdc++.h>
using namespace std;
int lpsubstring(string x, int n){
    bool t[n][n];
    memset(t, 0, sizeof(t));
    int maxsize = 1;
    for(int i = 0; i < n; i++){
        t[i][i] = true;
    }
    for(int i = 0; i < n - 1; i++){
        if(x[i] == x[i + 1]){
            t[i][i + 1] = true;
            maxsize = 2;
        }
    }
    for(int k = 3; k <= n; k++){
        for(int i = 0; i < n - k + 1; i++){
            int j = k + i - 1;
            if(t[i + 1][j - 1] && x[i] == x[j]){
                t[i][j] = true;
                if(k > maxsize){
                    maxsize = k;
                }
            }
        }
    }
    return maxsize;
}
int main(){
    string s;
    cin>>s;
    cout<<lpsubstring(s, s.size());
    return 0;
}