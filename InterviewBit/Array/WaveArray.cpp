#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0, j=1; i<n, j<n; i+=2, j+=2){
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}