#include <bits/stdc++.h>
using namespace std;
int LCS(string x, string y, int n, int m)
{
    int t[n + 1][m + 1];
    memset(t, 0, sizeof(t));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    cout << endl;
    return t[n][m];
}

//---------UISNG MEMORISATION-------------
// int t[1000 + 1][1000 + 1];
// int LCS(string x, string y, int n, int m){
//     if(n == 0 || m == 0){
//         return 0;
//     }
//     if(t[n][m] != - 1){
//         return t[n][m];
//     }
//     if(x[n - 1] == y[m - 1]){
//         return t[n][m] =  1 +  LCS(x, y, n - 1, m - 1);
//     }
//     else{
//         return t[n][m] = max(LCS(x, y, n - 1, m), LCS(x, y, n, m - 1));
//     }
// }

//-------USING RECURSSION----------------

// int LCS(string x, string y, int n, int m){
//     if(n == 0 || m == 0){
//         return 0;
//     }
//     if(x[n-1] == y[m - 1]){
//         return 1 + LCS(x, y, n - 1, m - 1);
//     }
//     else{
//         return max(LCS(x, y, n - 1, m) , LCS(x, y, n, m - 1));
//     }
// }
int main()
{
    // memset(t, -1, sizeof(t));
    string x, y;
    cin >> x >> y;
    cout << LCS(x, y, x.length(), y.length());
    return 0;
}