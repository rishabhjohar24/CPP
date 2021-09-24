#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,x,y,n,q,temp=1,flag=0;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>q;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        for(int p=0; p<q; p++){
            cin>>x>>y;
            a[x-1] = y;
            for(int i=1; i<n; i++){
                if(a[i-1] != a[i]){
                    temp++;
                    flag = temp;
                }else if(a[i-1] == a[i]){
                    temp = 0;
                }
                if(temp > flag){
                    flag = temp;
                }
            }
        }    
    }
    cout<<flag;
    return 0;
}