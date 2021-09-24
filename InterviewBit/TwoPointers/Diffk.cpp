#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> A;
    int k, n, val;
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        cin>>val;
        A.push_back(val);
    }
    int l, r, flag = 0;
    n = A.size();
    l = 0;
    r = 1;
    while (l < n && r < n){
        if(l != r && A[r] - A[l] == k){
            cout<<A[r]<<" - "<<A[l]<<" = "<<k;
            flag = 1;
            break;
        }
        else if(A[r] - A[l] > k){
            l++;
        } else {
            r++;
        }
    }
    if(flag != 1){
        cout<<"FAILURE";
    }
    return 0;
}



// int n, l, r;
//     n = A.size();
//     l = 0;
//     r = n - 1;
//     while (l < r){
//         if(A[l] + A[r] > B){
//             r--;
//         }
//         else if(A[l] + A[r] < B){
//             l++;
//         }
//         else {
//             return 1;
//         }
//     }
//     return 0;
// }