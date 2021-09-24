#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> A ;
    int B;
    cin>>B;
    int i=0,j=0;
    sort(A.begin(), A.end());
    while(i< A.size() && j<A.size())
    {
        if(A[j]-A[i] == B && i!=j )
        {
            return 1;
        }
        else{
            if(A[j]-A[i] < B){
                j++;
            }    
            else{
                i++;
            }    
        }
    }
    return 0;
}





// int main(){
//     vector <int> A =  { -533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322 };
//     int l = 0, r, n, flag = 0, B, temp;
//     cin>>B;
//     r = A.size() - 1;
//     n = A.size();
//     sort(A.begin(), A.end());
//     for(int i = 0; i < n; i++){
//         cout<<A[i]<<" ";
//     }
//     cout<<endl;
//     while(l < r){
//         temp = A[r] - A[l];
//         cout<<l<<" "<<r<<"     "<<A[r]<<" "<<A[l]<<"   "<<temp<<endl;
//         if(temp > B){
//             r--;
//         } else if(temp < B){
//             l++;
//         } else if(temp == B){
//             flag = 1;
//             break;
//         }
//     }
//     if(flag != 1){
//         cout<<"0";
//         return 0;
//     } else {
//         cout<<"1";
//         return 1;
//     }
}
// if(temp > B){
//             r--;
//         } else if(temp < B){
//             l++;
//         } else if(temp == B){
//             flag = 1;
//             break;
//         }
// int main(){
//     int n, l = 0, r, b;
//     cin>>n>>b;
//     r = n - 1;
//     int a[n], flag = 0;
//     for(int i = 0; i < n; i++){
//         cin>>a[i];
//     }
//     sort(a, a+n);
//     while(l < r){
//         if(a[r] - a[l] > b){
//             r--;
//         } else if(a[r] - a[l] < b){
//             l++;
//         } else if(a[r] - a[l] == b){
//             cout<<"1";
//             flag = 1;
//             break;
//         }
//     }
//     if(flag != 1){
//         cout<<"0";
//     }
//     return 0;
// }
