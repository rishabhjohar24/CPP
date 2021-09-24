#include<bits/stdc++.h>
using namespace std;
long long int maxAB(int c){
    long long int next_bit, limit, A, B;
    for(int i = 0; i < 32; i++){
        if(c < pow(2 , i)){
            next_bit = i;
            limit = pow(2 , i);
            break;
        }
    }
    A = (limit / 2) - 1;
    B = A ^ c;
    return A * B;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int c;
        cin>>c;
        cout<<maxAB(c)<<endl;
    }
    return 0;
}


//---------Naive Approach-------------------


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long int c, d, temp, gmax = INT_MIN, x, lmax, p;
//         cin>>c;
//         for(int i = 0; i < 32; i++){
//             if(c < pow(2 , i)){
//                 d = i;
//                 p = pow(2 , i);
//                 break;
//             }
//         }
//         for(int i = p - 1; i > sqrt(p); i--){
//             temp = c ^ i;
//             if(temp < p){
//                 lmax = temp * i;
//                 if(gmax < lmax){
//                     gmax = lmax;
//                 }
//             }
//         }
//         cout<<gmax<<endl;
//     }
//     return 0;
// }