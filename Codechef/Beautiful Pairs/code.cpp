#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        long long arr[n];
        map<long long, long long> a;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            a[arr[i]]++;
        }
        long long single = 0, multiple = 0;
        for(auto i : a){
            if(i.second > 1){
                multiple += ((i.second - 1) * i.second);
            }
        }
        long long ans = n * (n - 1) - multiple;
        cout<<ans<<endl;
    }
    return 0;
}
