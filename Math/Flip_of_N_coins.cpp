#include<iostream>
using namespace std;
int flip(int n, int s){
    if(s < n){
        return 0;
    }
    if(n == 1 || n == s){
        return 1;
    }
    return(flip(n - 1, s - 1) + flip(n - 1, s - 2));
}
int main(){
    int n, s;
    cin>>n>>s;
    cout<<flip(n, s);
    return 0;
}