#include<bits/stdc++.h>
using namespace std;
int main(){
    
}



































// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, e, h, a, b, c, j = 0, k = 0, l = 0;
//         cin>>n>>e>>h>>a>>b>>c;
//         int count = 0, ec, eo, hc, hm, moneyc = 0, leastc = INT_MAX, leastom, moneyom = 0;
//         ec = e;
//         eo = e;
//         hc = h;
//         hm = h;
//         if(n > e && n > h){
//             cout<<"-1"<<endl;
//         }
//         else if((n <= e && n <= h) || (e >= 2*n) || (h >= 3*n)){
//             //forcake
//             ec = ec - n;
//             hc = hc - n;
//             if(c > a && c > b){
//                 if(ec >= 2 || hc >= 1){
//                     l = n;
//                     moneyc = c*n;
//                     while(ec > 0 && hc > 0){
//                         cout<<1<<endl;
//                         //l for cake, k for milk, j for omelette
//                         if(((ec + 1) / 3 > 0) && ((hc + 1) / 2) > 0){
//                             l = l - 2;
//                             ec = ec - 1;
//                             k++;
//                             j++;
//                             leastc = c*l + b*k + a*j; 
//                             leastc = min(leastc, moneyc);
//                         }
//                         else if(((ec + 1) / 3 > 0) && ((hc + 1) / 2) == 0){
//                             l = l - 1;
//                             ec = ec - 2;
//                             hc++;
//                             j++;
//                             leastc = c*l + b*k + a*j; 
//                             leastc = min(leastc, moneyc);
//                         }
//                         else if(((ec + 1) / 3 == 0) && ((hc + 1) / 2) > 0){
//                             l = l - 1;
//                             hc = hc - 1;
//                             ec++;
//                             k++;
//                             leastc = c*l + b*k + a*j; 
//                             leastc = min(leastc, moneyc);
//                         }
//                         if(l + k + j != n){
//                             cout<<moneyc<<endl;
//                             break;
//                         }
//                     }
//                 }
//             }
//             else if(b < c && b < a && h <= 3*n){
//                 moneyom = b*n;
//                 cout<<moneyom<<endl;
//             }
//             else if(a < b && a < c && e <= 2*n){
//                 moneyom = a*n;
//                 cout<<moneyom<<endl;
//             }
//             else if(c < a && c < b && (n <= e && n <= h)){
//                 moneyc = c*n;
//                 cout<<moneyc<<endl;
//             }
//         }
//     }
//     return 0;
// }