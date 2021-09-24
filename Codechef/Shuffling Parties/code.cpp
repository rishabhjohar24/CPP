#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int odd = 0, even = 0, x, n;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>x;
            (x % 2) ? odd++ : even++;
        }
        cout<<min(odd, n / 2) + min(even, n / 2 + n % 2)<<"\n";
    }
    return 0;
}