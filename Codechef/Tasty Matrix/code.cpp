#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(long long i = 0; i < t; i++){
        long long n, m, k;
        cin>>n>>m>>k;
        long long _xor = 0;
        for(long long i = 1; i <= n; i++){
            if(min(i, m) % 2 == 1){
                _xor = _xor ^ (i + k + 1);
            }
        }
        for(long long j = 2; j <= m; j++){
            if(min(n, m - j + 1) % 2 == 1){
                _xor = _xor ^ (k + n + j);
            }
        }
        cout<<_xor<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         long long n, m , k;
//         cin>>n>>m>>k;
//         long long sum = 0, _xor = k;
//         if((n % 2 == 0 && m % 2 == 0) || (n % 2 != 0 && m % 2 != 0)){
//             while(k + n + m > _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//         }
//         if((n % 2 == 0 && m % 2 != 0) && n < m){
//             while(k + n >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//             _xor = m + 2;
//             while(k + m + n >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//         }
//         if((n % 2 == 0 && m % 2 != 0) && n > m){
//             while(k + m + 1 >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//             while(n + 1 >= _xor){
//                 _xor++;
//                 sum = sum ^ _xor;
//             }
//             _xor = n + 3;
//             while(k + m + n >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//         }
//         if((n % 2 == 0 && m % 2 != 0) && n < m){
//             while(k + n >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//             _xor = m + 2;
//             while(k + m + n >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//         }
//         if((n % 2 != 0 && m % 2 == 0) && n < m){
//             while(k + n + 1 >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//             while(m + 1 >= _xor){
//                 _xor++;
//                 sum = sum ^ _xor;
//             }
//             _xor = m + 3;
//             while(k + m + n >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//         }
//         if((n % 2 != 0 && m % 2 != 0) && n > m){
//             while(k + m >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//             _xor = n + 2;
//             while(k + m + n >= _xor){
//                 _xor = _xor + 2;
//                 sum = sum ^ _xor; 
//             }
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int na, ma;
//         cin >> na >> ma;
//         long int karl;
//         cin >> karl;
//         int  man = min(na, ma), mumbai = max(na, ma);
//         long int  cant  = 0;
//         for (int i = 2; i <= mumbai +  man; i++) {
//             int kkr = i - 1;
//             if(kkr %2!=0) {
//                 if(kkr <= man && kkr <= mumbai) cant =cant ^ (karl + i);
//                     else {
//                         int kp = kkr - man;
//                         int kq = kkr - mumbai;
//                         long long int  qqp = 0;
//                         if(kp > 0) qqp += kp;
//                          if(kq > 0) qqp += kq;
//                         kkr = kkr - qqp ;
//                         if(kkr % 2 != 0) cant = cant ^ (karl + i);
//                     }
//             }
//             else {
//                 if(!(kkr <= man && kkr <= mumbai)) {
//                     int kp = kkr - man;
//                         int kq = kkr - mumbai;
//                         long long int  qqp =0;
//                         if(kp > 0)  qqp  += kp;
//                          if(kq > 0)  qqp  += kq;
//                         kkr = kkr - qqp;
//                         if(kkr % 2 != 0) cant  = cant ^ (karl + i);
//                 }
//             }
//         }
//         cout << cant  << "\n";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     for(long long i = 0; i < t; i++){
//         long long  n, m, k;
//         cin>>n>>m>>k;
//         long long lxo, gxo = 0;
//         long long arr[n][m];
//         for(int i = 1; i <= n; i++){
//             for(int j = 1; j <= m; j++){
//                 arr[i][j] = i + j + k;
//             }
//         }
//         for(long long i = 1; i <= n; i++){
//             lxo = arr[i][1];
//             for(long long j = 2; j <= m; j++){
//                 lxo = lxo ^ arr[i][j]; 
//             }
//             gxo = gxo ^ lxo;
//         }
//         cout<<gxo<<endl;
//     }
//     return 0;
// }