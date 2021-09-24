#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>a, int n, int i){
    if(i == n - 1){
        return true;
    }
    if(a[i  + 1] > a[i]){
        return isSorted(a, n, i + 1);
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<isSorted(a, n, 0);
    return 0;
}