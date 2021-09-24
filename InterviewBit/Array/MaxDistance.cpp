#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp=0, n, res=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] <= a[j]){
                temp = j - i;
            }
            if(temp > res){
                res = temp;
            }
        }
    }
    cout<<res;
    return 0;
}