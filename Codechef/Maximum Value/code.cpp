#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, x, y, var;
        cin>>n;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            cin>>var;
            arr.push_back(var);
        }
        sort(arr.begin(), arr.end());
        x = (arr[n - 1] * arr[n - 2]) + (arr[n - 1] - arr[n - 2]);
        y = (arr[0] * arr[1]) + (arr[1] - arr[0]);

        cout<<max(x, y)<<endl;
    }
    return 0;
}