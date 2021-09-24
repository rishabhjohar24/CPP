#include<bits/stdc++.h>
using namespace std;
float rounding(float val){
    float value = (int)(val * 100.00 + 0.5);
    return (float)value/100.00;
}
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        float k1, k2, k3, v, least;
        cin>>k1>>k2>>k3>>v;
        least = k1 * k2 * k3 * v;
        least = (float) 100.00 / least;
        least = rounding(least);
        least = least * 100;
        if(least < 958){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}