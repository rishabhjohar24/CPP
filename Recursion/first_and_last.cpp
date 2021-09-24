#include<bits/stdc++.h>
using namespace std;
int first(vector<int>a, int i, int n, int val){
    if(i == n){
        return -1;
    }
    if(a[i] == val){
        return i;
    }
    return first(a, i + 1, n, val);
}
int last(vector<int>a, int i, int n, int val){
    if(i == n){
        return -1;
    }
    int t = last(a, i + 1, n, val);
    if(t != -1){
        return t;
    }
    if(a[i] == val){
        return i;
    }
    return -1;
}
int main(){
    int n, val;
    cin>>n>>val;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<first(a, 0, n, val)<<" "<<last(a, 0, n, val);
    return 0;
}