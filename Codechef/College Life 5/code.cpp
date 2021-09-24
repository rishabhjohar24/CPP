#include<bits/stdc++.h>
using namespace std;

int main() {
    int  t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        long int f[n],c[m];
        for(int i=0;i<n;i++) cin >> f[i];
        for(int i=0;i<m;i++) cin >> c[i];
        int i=0,j=0,flag=0,count=0;
        while (i<n || j<m)
        {
            if(f[i] < c[j] && flag == 0) {
               // if(i == n-1) continue;
                i++;
                continue;
            }
            else if(f[i] < c[j] && flag == 1) {
           //     if(i == n-1) count++,flag=0;
                i++;
                count++;
                flag=0;
                }

            if(c[j] < f[i] && flag == 1){
             //   if(j == m-1) continue;
                j++;
                continue;
            }
            else if(c[j] < f[i] && flag == 0){
          //      if(j == m-1) count++,flag=1;
                 j++;
                 count++;
                 flag=1;
                 }
        }
        //cout << i << " " << j << " ";
        cout << count << "\n";
    }
}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int l = 0; l < t; l++){
//         int n, m;
//         cin>>n>>m;
//         int f[n], c[n];
//         for(int i = 0; i < n; i++){
//             cin>>f[i];
//         }
//         for(int i = 0; i < m; i++){
//             cin>>c[i];
//         }
//        int count = 0, i = 1, j = 0, flag = 0;
//         while(i - 1 < n && j < m){
//             if(f[i] == c[j]){
//                 i++;
//                 j++;
//             }
//             if(f[i - 1] != c[j] && ((f[i - 1] < c[j] && f[i] > c[j]) || f[i - 1] > c[j]) && flag == 0){
//                 i++;
//                 count++;
//                 flag = 1;
//             }
//             if(f[i - 1] != c[j] && ((c[j] < f[i - 1] && c[j + 1] > f[i - 1]) || c[j] > f[i - 1]) && flag == 1){
//                 j++;
//                 count++;
//                 flag = 0;
//             }
            
//         }
//         // if(n > m && flag == 1){
//         //     count++;
//         // }
//         // else if(n < m && flag == 0){
//         //     count++;
//         // }
//         cout<<count<<endl;
//     }
//     return 0;
// }

// //Switiching to cricket from football
            // if(f[i] != c[j] && flag == 0){
            //     if(f[i] < c[j]){
            //         i++;
            //     }
            //     else if(f[i - 1] > c[j]){
            //         count++;
            //         flag = 1;
            //         j++;
            //     }
            // }
            // //Switiching from football to cricket
            // if(f[i] != c[j] && flag == 1){
            //     if(c[j] < f[i]){
            //         j++;
            //     }
            //     else if(c[j - 1] > f[j]){
            //         i++;
            //         flag = 0;
            //         count++;
            //     }
            // }