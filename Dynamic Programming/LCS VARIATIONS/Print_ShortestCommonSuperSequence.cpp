#include<bits/stdc++.h>
using namespace std;
string print_shortestCommunSupersequence(string x, string y, int n, int m){
    int t[n+1][m+1];
    string s;
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(x[i - 1] == y[j - 1]){
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else{
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if(x[i - 1] == y[j - 1]){
            s.push_back(x[i - 1]);
            i--;
            j--;
        }   
        else{
            if(t[i][j - 1] < t[i - 1][j]){
                s.push_back(x[i - 1]);
                i--;
            }
            else if(t[i][j - 1] >= t[i - 1][j]){
                s.push_back(y[j - 1]);
                j--;
            }
        }
    }
    while(i > 0){
        s.push_back(x[i - 1]);
        i--;
    }
    while(j > 0){
        s.push_back(y[j - 1]);
        j--;
    }
    // reverse(s.begin(), s.end());
    return s;
}
int main(){
    string x, y;
    cin>>x>>y;
    cout<<print_shortestCommunSupersequence(x, y, x.length(), y.length());
    return 0;
}