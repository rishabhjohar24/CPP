#include<bits/stdc++.h>
using namespace std;
int coinchange(vector<int>& arr, int n, int m){
    if(m == 0){
        return 1;
    }
    if(m < 0){
        return 0;
    }
    if (n <=0 && m >= 1){
        return 0;
    }
    return coinchange(arr, n - 1, m) + coinchange(arr, n, m - arr[n - 1]);
}
int main(){
    int n, m, var;
    cin>>n>>m;
    vector<int> a;
    for(int i = 0; i < n; i++){
        cin>>var;
        a.push_back(var);
    }
    cout<<coinchange(a, n, m);
    return 0;
}