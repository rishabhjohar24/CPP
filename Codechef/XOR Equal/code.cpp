#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    for(long long i = 0; i < t; i++){
        long long n, x, freq = 0, op = 0, val;
        cin>>n>>x;
        unordered_map<long long, long long>a, b;
        for(long long i = 0; i < n; i++){
            cin>>val;
            a[val]++;
            b[val ^ x]++;
        }
        if(x == 0){
            for(auto i : a){
                freq = max(freq, i.second);
            }
            cout<<freq<<" "<<0<<"\n";
        }
        else{
            for(auto i : a){
                long long temp = i.second + b[i.first];
                if(temp >= freq && op > b[i.first]){
                    freq = temp;
                    op = b[i.first];
                }
                else if(temp > freq){
                    freq = temp;
                    op = b[i.first];
                }
            }
            cout<<freq<<" "<<op<<"\n";
        }
    }
    return 0;
}