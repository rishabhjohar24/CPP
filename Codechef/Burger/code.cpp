#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        ll x, y, gsum = 0, lsum = x, count = 0, multiplier = x;
        cin>>x>>y;
        while(gsum < y){
            lsum = lsum*2;
            if(gsum + lsum > y){
                lsum = lsum / 2;
                gsum += lsum;
                lsum = x;
            }
            count++;
        }
        if(gsum == y){
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}