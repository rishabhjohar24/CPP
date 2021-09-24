#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(long long i = 0; i < t; i++){
        long long n, k, sum = 0;
        cin>>n>>k;
        long long arr[n];
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
            if(i < k){
                sum += arr[i];
            }
        }
        vector <long long> a;
        a.push_back(sum);
        for(long long i = k; i < n; i++){
            sum = arr[i] + sum - arr[i - k];
            a.push_back(sum);
        }
        for(long long i = 0; i < a.size(); i++){
            cout<<a[i]<<" ";
        }
        // cout<<endl;
        // long long lbundle = 1, gbundle = INT_MIN, ele = NULL;
        // for(int i = 1; i < a.size(); i++){
        //     if(a[i - 1] == a[i]){
        //         lbundle++;
        //         ele = a[i];
        //         gbundle = max(gbundle, lbundle);
        //     }
        //     else{
        //         cout<<" x ";
        //         lbundle = 1;
        //         gbundle = max(gbundle, lbundle);
        //     }
        // }
        // long long count = 0;
        // for(int i = a.size() - 1; i >= 0; i--){
        //     if(ele != a[i]){
        //         count++;
        //     }
        // }
    }
    return 0;
}