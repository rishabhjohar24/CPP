#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, sum = 0, rem;
        cin>>n;
        while(n > 0){
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }
        cout<<sum<<endl;
    }
    return 0;
}