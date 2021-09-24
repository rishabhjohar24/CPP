#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t[n + 1];
    for(int i = 0; i <= n; i++){
        if(i <= 2){
            t[i] = i;
        }
        else{
            t[i] = t[i - 1] + (i - 1) * t[i - 2];
        }
    }
    cout<<t[n];
    return 0;
}