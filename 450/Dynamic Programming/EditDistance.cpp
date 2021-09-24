#include<bits/stdc++.h>
using namespace std;
int edit(string a, string b, int n, int m){
    int t[n + 1][m + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(j == 0){
               t[i][j] = i;
            }
            else if(i == 0){
                t[i][j] = j;
            }
            else if(a[i - 1] == b[j - 1]){
                t[i][j] = t[i - 1][j - 1];
            }
            else{
                t[i][j] = 1 + min(t[i][j - 1], min(t[i - 1][j], t[i - 1][j - 1]));
            }
        }
    }
    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= m; j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return t[n][m];
}
int main(){
    string a, b;
    cin>>a>>b;
    cout<<edit(a, b, a.size(), b.size());
    return 0;
}