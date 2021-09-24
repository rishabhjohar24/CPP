#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        double x, y, z, g;
        cin>>x>>y>>z;
        double t = 0.00, u = 0;
        t = sqrt(2 * (abs(y - z) / 10));
        u = x / t;
        printf("%.2f", u);
        cout<<endl;
    }
    return 0;
}