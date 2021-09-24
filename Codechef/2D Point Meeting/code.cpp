#include<bits/stdc++.h>
using namespace std;
#define ld long double
int check(ld h, ld k, ld arrx[], ld arry[],int n){
    int steps = 0;
    for(int j = 0; j < n; j++){
        ld xx = h - arrx[j];
        ld yy = k - arry[j];
        if(xx == 0 && yy == 0){
          steps += 0;
        }
        else if((xx == 0 && yy != 0) || (xx != 0 && yy == 0) ){
          steps += 1;
        }
        else if(abs(xx) == abs(yy)){
          steps += 1;
        }
        else steps += 2;
    }
    return steps ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ld arrx[n],arry[n];
        ld h, k;
        for(int i = 0; i < n; i++){
            cin>>arrx[i];
        }
        for(int i = 0; i < n; i++){
            cin>>arry[i];
        }
        int mins = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int l = 0; l < n; l++){
                //mean_point
                h = (arrx[i] + arrx[l]) / 2;
                k = (arry[i] + arry[l]) / 2;
                mins = min(mins ,check(h, k, arrx, arry, n));
                //x & y intersection points
                h = arrx[i];
                k = arry[l];
                mins = min(mins ,check(h, k, arrx, arry, n));
                //x+y=c1 and x-y=c2 intersection points
                ld c1=arrx[i]+arry[i];
                ld c2=arrx[l]-arry[l];
                h = (c1+c2)/2;
                k = (c1-c2)/2;
                mins = min(mins ,check(h, k, arrx, arry, n));
                //x+y=c and x intersection
                ld c3 = arrx[i] + arry[i];
                h = arrx[l];
                k = c3 - h;
                mins = min(mins ,check(h, k, arrx, arry, n));
                //x+y and y intersection
                ld c4 = arrx[i] + arry[i];
                k = arry[l];
                h = c4 - k;   
                mins = min(mins ,check(h, k, arrx, arry, n));
                //x-y and X
                ld c5 = arrx[i] - arry[i];
                h = arrx[l];
                k = h - c5;
                mins = min(mins ,check(h, k, arrx, arry, n));
                //x-y and y
                ld c6 = arrx[i] - arry[i];
                k = arry[l];
                h = c6 + k; 
                mins = min(mins ,check(h, k, arrx, arry, n));
            }
        }
        cout<<mins <<"\n";
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, lmin = 0, gmin = INT_MAX;
//         cin>>n;
//         vector<int>x(n, 0), y(n, 0);
//         for(int i = 0; i < n; i++){
//             cin>>x[i];
//         }
//         for(int i = 0; i < n; i++){
//             cin>>y[i];
//         }
//         int diffx, diffy;
//         for(int i = 0; i < n; i++){
//             lmin = 0;
//             for(int j = 0; j < n; j++){
//                 if(i != j){
//                     diffx = x[j] - x[i];
//                     diffy = y[j] - y[i];
//                     if(!diffx && !diffy){
//                         lmin += 0;
//                     }
//                     else if((diffx == diffy) || 
//                         (abs(diffy) == abs(diffx)) || 
//                             (!diffx && diffy) || 
//                                 (diffx && !diffy)){
//                         lmin += 1;
//                     }
//                     else if(diffx != diffy){
//                         lmin += 2;
//                     }
//                 }
//             }
//             gmin = min(gmin, lmin);
//         }
//         cout<<gmin<<"\n";
//     }
//     return 0;
// }