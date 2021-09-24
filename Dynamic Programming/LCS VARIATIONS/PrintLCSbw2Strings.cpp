#include<bits/stdc++.h>
using namespace std;
string Print_LCSubSequence(string x, string y, int n, int m){
    int t[n + 1][m + 1];
    string s;
    memset(t, 0, sizeof(t));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(x[i - 1] == y[j - 1]){
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else {
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
        else {
            if(t[i][j - 1] > t[i - 1][j]){
                j--;
            }
            else {
                i--;
            }
        }
    }
    reverse(s.begin(), s.end());
    return s;
}
int main(){
    string x, y;
    cin>>x>>y;
    cout<<Print_LCSubSequence(x, y, x.length(), y.length());
    return 0;
}

// for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= m; j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<<"_"<<" "<<"_";
    // for(int j = 0; j < m; j++){
    //     cout<<" "<<y[j];
    // }
    // cout<<endl;
    // for(int i = 0; i <= n; i++){
    //     if(i > 0){
    //         cout<<x[i - 1]<<" ";
    //     }
    //     for(int j = 0; j <= m; j++){
    //         if(i == 0 && j == 0){
    //             cout<<">"<<" ";
    //         }
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
  









/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
// void lcs( string X, string Y, int m, int n ) 
// { 
//    int L[m+1][n+1]; 
  
//    /* Following steps build L[m+1][n+1] in bottom up fashion. Note 
//       that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
//    for (int i=0; i<=m; i++) 
//    { 
//      for (int j=0; j<=n; j++) 
//      { 
//        if (i == 0 || j == 0) 
//          L[i][j] = 0; 
//        else if (X[i-1] == Y[j-1]) 
//          L[i][j] = L[i-1][j-1] + 1; 
//        else
//          L[i][j] = max(L[i-1][j], L[i][j-1]); 
//      } 
//    } 
  
//    // Following code is used to print LCS 
//    int index = L[m][n]; 
  
//    // Create a character array to store the lcs string 
//    char lcs[index+1]; 
//    lcs[index] = '\0'; // Set the terminating character 
  
//    // Start from the right-most-bottom-most corner and 
//    // one by one store characters in lcs[] 
//    int i = m, j = n; 
//    while (i > 0 && j > 0) 
//    { 
//       // If current character in X[] and Y are same, then 
//       // current character is part of LCS 
//       if (X[i-1] == Y[j-1]) 
//       { 
//           lcs[index-1] = X[i-1]; // Put current character in result 
//           i--; j--; index--;     // reduce values of i, j and index 
//       } 
  
//       // If not same, then find the larger of two and 
//       // go in the direction of larger value 
//       else if (L[i-1][j] > L[i][j-1]) 
//          i--; 
//       else
//          j--; 
//    } 
  
//    // Print the lcs 
//    cout << "LCS of " << X << " and " << Y << " is " << lcs; 
// } 
  
// /* Driver program to test above function */
// int main() 
// { 
//     string x, y;
//   cin>>x>>y;
//   int m = x.length(); 
//   int n = y.length(); 
//   lcs(x, y, m, n); 
//   return 0; 
// } 