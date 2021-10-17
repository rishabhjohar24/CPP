//-------USING TOP DOWN------------

#include <bits/stdc++.h>
using namespace std;
int knapsack(int val[], int wt[], int n, int w)
{
    int t[n + 1][w + 1];
    memset(t, -1, sizeof(t));
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
            else if (wt[i - 1] <= j)
            {
                t[i][j] = max((val[i - 1] + t[i - 1][j - wt[i - 1]]), t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][w];
}
int main()
{
    int n, w, max;
    cin >> n >> w;
    int val[n], wt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    max = knapsack(val, wt, n, w);
    cout << max;
    return 0;
}

//-------USING MEMORISATION----------

// #include<bits/stdc++.h>
// using namespace std;
// int t[100][100];
// int knapsack(int wt[], int val[], int l, int k){
//     int n = k;
//     int w = l;
//     if(n == 0 || w == 0){
//         return 0;
//     }
//     if(t[w][n] != -1){
//         return t[w][n];
//     }
//     if(wt[n-1] <= w){
//         return t[n][w] = max((val[n-1] + knapsack(wt, val, w - wt[n-1], n - 1)), knapsack(wt, val, w, n-1));
//     }
//     return t[n][w] = knapsack(wt, val, w, n - 1);
// }
// int main(){
//     memset(t, -1, sizeof(t));
//     int w, n, k;
//     cin>>n>>w;
//     int wt[n], val[n];
//     for(int i = 0; i < n; i++){
//         cin>>wt[i];
//     }
//     for(int i = 0; i < n; i++){
//         cin>>val[i];
//     }
//     k = knapsack(wt, val, w, n);
//     cout<<k;
//     return 0;
// }