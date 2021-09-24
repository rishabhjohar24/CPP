#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>dp(n + 1, 0);
    dp[0] = -1;
    dp[1] = -1;
    for(int i = 2; i <= n; i += 2){
        dp[i] = i / 2 + dp[i - 2];
    }
    cout<<dp[n];
    return 0;
}