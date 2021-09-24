#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= sqrt(n); i++){
        cout<<i * i<<" ";
    }
    return 0;
}