#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string , int , int );
int t[1001][1001] ;

//--------Optimised Code-----------

// int palindromePartitioning(string s, int i, int j){
//     if(i >= j || ispalindrome(s, i, j)){
//         return 0;
//     }
//     int temp, mn = INT_MAX, left, right;
//     for(int k = i; k < j; k++){
//         if(t[i][k] != -1){
//             left = t[i][k];
//         }
//         else{
//             left = palindromePartitioning(s, i, k);
//         }
//         if(t[k + 1][j] != 1-1){
//             right = t[k + 1][j];
//         }
//         else{
//             right = palindromePartitioning(s, k + 1, j);
//         }
//         temp = left + right + 1;
//         mn = (mn, temp);
//     }
//     return t[i][j] = mn;
// }



//------>Using Memorization<------------

int palindromePartitioning(string s, int i, int j){
    if(i >= j || ispalindrome(s, i, j)){
        return 0;
    }
    if(t[i][j] != -1){
        return t[i][j];
    }
    int temp, mn = INT_MAX;
    for(int k = i; k < j; k++){
        temp =  palindromePartitioning(s, i, k) 
                    + palindromePartitioning(s, k + 1, j) 
                        + 1;
        mn = min (temp, mn);                   
    }
    return t[i][j] = mn;
}

//----->recurssive Code<------------

// int palindromePartitioning(string s, int i, int j){
//     if(i >= j){
//         return 0;
//     }
//     if(ispalindrome(s, i, j)){
//         return 0;
//     }
//     int temp, m_n = INT_MAX;
//     for(int k = i; k < j; k++){
//         temp = palindromePartitioning(s, i, k) + palindromePartitioning(s, k + 1, j) + 1;
//         m_n = min(temp, m_n);
//     }
//     return m_n;
// }
bool ispalindrome(string s, int x, int y){
    while(x < y){
        if(s[x] != s[y]){
            return false;
        }
        x++;
        y--;
    }
    return true;
}
int main(){
    memset(t, -1, sizeof(t));
    string s;
    cin>>s;
    cout<<palindromePartitioning(s, 0, s.size() - 1);
    return 0;
}