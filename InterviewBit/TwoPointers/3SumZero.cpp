#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, var, l, r, sum;
    // cin>>n;
    // vector <int> A(n);
    // for(int i = 0; i < n; i++){
    //     cin>>A[i];
    // }
    // int flag = 0;
    vector <long long > A = {2147483647, -2147483648, -2147483648, 0, 1  };
    sort(A.begin(), A.end());
    vector<vector <long long > > result;
    n = A.size();
    for(int  i = 0; i < A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    int c = 0;
    for(int i = 0; i < n - 2; ++i){
        // var = A[i];
        l = i + 1;
        r = n - 1;
        if (i>0 && A[i]==A[i-1]){ 
            continue;
        }    
        while(l < r){
            sum = A[i] + A[l] + A[r];
            if(sum == 0){
                // cout<<A[i]<<" "<<A[l]<<" "<<A[r]<<endl;
                vector <long long> temp = {A[i] ,A[l], A[r]};
                var = result.size();
                if(var > 0 && result[var-1][0] == temp[0] && result[var-1][1] == temp[1] && result[var-1][2] == temp[2]);
                else{
                    result.push_back(temp);
                }
                ++l;
                --r;
            }
            else if(sum < 0){
                ++l;
            }
            else if(sum > 0){
                --r;
            }
        }
    }
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}










// int main(){
//     int n, var, l, r, sum;
//     cin>>n;
//     vector <int> A(n);
//     for(int i = 0; i < n; i++){
//         cin>>A[i];
//     }
//     int flag = 0;
//     sort(A.begin(), A.end());
//     vector<vector <int> > result;
//     for(int i = 0; i < n - 2; i++){
//         // var = A[i];
//         l = i + 1;
//         r = n - 1;
//         while(l < r){
//             sum = A[i] + A[l] + A[r];
//             if(sum == 0){
//                 vector <int> temp = {A[i] ,A[l], A[r]};
//                 result.push_back(temp);
//                 l++;
//                 r--;
//                 // flag = 1;
//                 break;
//             }
//             else if(sum < 0){
//                 l++;
//             }
//             else if(sum > 0){
//                 r--;
//             }
//         }
//     }
//     for(int i = 0; i < result.size(); i++){
//         for(int j = 0; j < result[i].size(); j++){
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }