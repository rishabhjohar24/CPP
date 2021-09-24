#include<bits/stdc++.h>
using namespace std;
int main(){
    int stepy,n,stepx,steps=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=1; i<n; i++){
        stepx = abs(a[i-1] - a[i]);
        stepy = abs(b[i-1] - b[i]);
        if(stepx > stepy){
            steps += stepx;
        } else if(stepx < stepy){
            steps += stepy;
        } else if(stepx == stepy){
            steps += stepx;
        }
    }
    cout<<"Total steps taken: "<<steps;
    return 0;
}