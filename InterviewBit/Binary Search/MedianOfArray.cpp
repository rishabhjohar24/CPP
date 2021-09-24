#include<bits/stdc++.h>
using namespace std;
double find(const vector<float> A, int n, const vector<float> B, int m){
    if(n == 0){
        return median(B, m);
    }
    if(m == 0){
        return median(A, n);
    }
    if(n == 1 && m == 1){
        return ((A[0] + B[0]) / 2);
    }
    if(n == 2 && m == 2){
         return ((max(A[0], B[0]) + min(A[1], B[1])) / 2);
    }
    float m1 = median(A, n);
    float m2 = median(B, m);
    if (m1 == m2){
        return m1;
    }
    else if(m1 < m2){
        if (n % 2 == 0)
            return find(A, + n/2 - 1, B, m - m/2 +1);
        else{
            return find(A + n/2, B, m - m/2);
        }    
    }
    else if(m1 > m2){
        
    }
}
double median(const vector<float> A, int n){
    if(n % 2 == 0){
        return ((A[n/2] + A[(n/2) + 1])/2);
    }
    else{
        return a[(n/2) + 1];
    }
}
int main(){
    vector<float> A, B;
    float var;
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>var;
        A.push_back(var);
    }
    for(int i = 0; i < m; i++){
        cin>>var;
        B.push_back(var);
    }
}

// int main(){
//     vector<int> A, B;
//     int var, n, m;
//     cin>>n>>m;
//     for(int i = 0; i < n; i++){
//         cin>>var;
//         A.push_back(var);
//     }
//     for(int i = 0; i < m; i++){
//         cin>>var;
//         B.push_back(var);
//     }
//     vector<float > arr;
//     for(int i = 0; i < n; i++){
//         arr.push_back(A[i]);
//     }
//     for(int i = 0; i < m; i++){
//         arr.push_back(B[i]);
//     }
//     sort(arr.begin(), arr.end());
//     for(int i = 0; i < n + m; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     var = arr.size();
//     float val;
//     if(var % 2 == 0){
//         var = var / 2;
//         val = (arr[var - 1] + arr[var]) / 2;
//         cout<<"EVEN "<<val;
//     }
//     else{
//         var = (var + 1) / 2;
//         cout<<"ODD "<<arr[var - 1];
//     }
//     return 0;
// }