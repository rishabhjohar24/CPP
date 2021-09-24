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
        long long lbundle = 1, gbundle = INT_MIN;
        for(int i = 1; i < a.size(); i++){
            if(a[i - 1] == a[i]){
                lbundle++;
                gbundle = max(gbundle, lbundle);
            }
            else{
                lbundle = 1;
            }
        }
        if(gbundle == INT_MIN){
            cout<<0<<endl;
        }
        else{
            cout<<k - gbundle<<endl;
        }
    }
    return 0;
}