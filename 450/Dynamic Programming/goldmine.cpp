#include<bits/stdc++.h>
using namespace std;
int goldmine(vector<vector<int>>& a, int n, int m){
    vector<vector<int>>dp(n, vector<int>(m, 0));
    int right = 0, right_up = 0, right_down = 0;
    for(int i = m - 1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            if(i == m - 1){
                right = 0;
            }
            else{
                right = dp[j][i + 1];
            }
            if(i == m - 1 || j == 0){
                right_up = 0;
            }
            else{
                right_up = dp[j - 1][i + 1];
            }
             if(j == n - 1 || i == m - 1){
                right_down = 0;
            }
            else{
                right_down = dp[j + 1][i + 1];
            }
            dp[j][i] = a[j][i] + max(right, max(right_down, right_up));
        }
    }
    // cout<<"-------------------------\n"<<setw(6);
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout<<dp[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // } 
    int res = -1;
    for(int i = 0; i < n; i++){
        res = max(res, dp[i][0]);
    }
    return res;
}
int main(){
    int n, m;
    srand(time(0));
    n = rand() % 10 + 1;
    m = rand() % 10 + 1;
    cout<<n<<" "<<m<<endl;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           a[i][j] = rand() % 20 + 1;
        }
    }
    cout<<setw(3); 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<a[i][j]<<setw(3);
        }
        cout<<endl;
    } 
    cout<<goldmine(a, n, m);
    return 0;
}
// int goldmine(vector<vector<int>>& a, int n, int m){
//     int t[n][m];
//     memset(t, 0, sizeof(t));
//     int right = 0, right_down = 0, right_up = 0;
//     for(int i = m - 1; i >= 0; i--){
//         for(int j = 0; j < n; j++){
//             if(i == m - 1){
//                 right = 0;
//             }
//             else{
//                 right = t[j][i + 1];
//             }
//             if(i == m - 1 || j == 0){
//                 right_up = 0;
//             }
//             else{
//                 right_up = t[j - 1][i + 1];
//             }
//             if(j == n - 1 || i == m - 1){
//                 right_down = 0;
//             }
//             else{
//                 right_down = t[j + 1][i + 1];
//             }
//             t[j][i] = a[j][i] + max(right, max(right_down, right_up));
//         }
        
//     }
//     int res = t[0][0];
//     for(int i = 1; i < n; i++){
//         res = max(res, t[i][0]);
//     }
//     return res;
// }