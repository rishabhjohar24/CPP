#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0, j=0, count=0, n, m, k=1;
    cin>>n>>m;
    int a[n][m] = {};
    while(count != (n*m)){
        for(i; j<n && a[i][j]==0 && count!=(n*m); j++){
            a[i][j] = k++;
            count++;
        }
        j--;
        i++;
        for(j; i<n && a[i][j]==0 && count!=(n*m); i++){
            a[i][j] = k++;
            count++;
        }
        i--;
        j--;
        for(i; j>=0 && a[i][j]==0 && count!=(n*m); j--){
            a[i][j] = k++;
            count++;
        }
        j++;
        i--;
        for(j; i>=0 && a[i][j]==0 && count!=(n*n); i--){
            a[i][j] = k++;
            count++;
        }
        i++;
        j++;
    }
    for(i=0; i<n; i++){
        for (j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//-----------------------ERRORS in the code below---------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// int p = 1, k = 0, temp;
// // a & b = Index, c = size
// int down(int, int, int, int);
// int up(int a, int b, int c, int arr[][]){
//     int uloop = 0;
//     temp = 2*c - 4*a - 1;
//     while(uloop < temp){
//         if(b < c){
//             arr[a][b] = p;
//             p++;
//             b++;
//             if(b == c && a < c){
//                 a++;
//                 b--;
//             }
//         }
//     }
//     k++;
//     a--;
//     down(a, b-1, c, arr);
//     return 0;
// }
// int down(int d, int e, int f, int ar[][]){
//     int dloop = 0,
//         check, r, q;
//     temp =  temp - 2;
//     while(dloop < temp){
//         if (d > (k - 1)){
//             ar[d][e] = p;
//             e--;
//             p++;
//             if(e == (k - 1)){
//                 d--;
//                 e++;
//             }
//         }
//     }
//     check = f%2;
//     if(check != 0){
//         r = (f-1)/2;
//         q = (f-1)/2;
//     } else if(check == 0){
//         r = (f-1)/2;
//         q = ((f-1)/2) - 1;
//     }
//     if(ar[r][q] == f*f){
//         return 0;
//     } else if(ar[r][q] != f*f){
//         e++;
//         f = f -2;
//         up(d, e, f, ar);
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int l[n][n];
//     up(0, 0, n, l);
//     for(int g=0; g<n; g++){
//         for(int y=0; y<n; y++){
//             cout<<l[g][y]<<"  ";
//         }
//     }
//     return 0;
// }