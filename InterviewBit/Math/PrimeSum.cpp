#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a[2],flag,flag1,flag2,temp=0;
    flag1 = _INTEGRAL_MAX_BITS;
    flag2 = _INTEGRAL_MAX_BITS;
    cin>>n>>k;
    int b[n]= {};
    for(int i=1; i<=n; i++){
        if(i == 1 || i == 0){
            continue ;
        }
        flag = 1; 
        for(int j=2; j<= i/2; j++){
            if(i%j == 0){
                flag = 0;
                break ;
            } 
        }
        if(flag == 1){
            b[temp] = i;
            temp++;
        }
    }
    for(int i = 0; i<temp; i++){
        for(int j=0; j<temp; j++){
            if(b[i] + b[j] == k){
                if(flag1 > b[i]){
                    flag1 = b[i];
                }
                if(flag2 > b[j]){
                    flag2 = b[j];
                } 
            }
        }
    }
    cout<<flag1<<" "<<flag2;
    return 0;
}