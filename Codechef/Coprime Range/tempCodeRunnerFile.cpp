#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= 1000000; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= 100000; i += p){
                prime[i] = false;
            }
        }
    }
    for(int i = 0; i < t; i++){
        long l, r;
        cin>>l>>r;
        for(int i = l - 1; i > 0; i--){
            if(prime[i]){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}