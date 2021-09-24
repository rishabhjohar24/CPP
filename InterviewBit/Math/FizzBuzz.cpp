#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        if((i+1) % 15 == 0){
            cout<<"FizzBuzz"<<" ";
        } else if((i+1) % 3 == 0 ){
            cout<<"Fizz"<<" ";
        } else if((i+1) % 5 == 0 ){
            cout<<"Buzz"<<" ";
        } else {
            cout<<i + 1<<" ";
        }
    }
   return 0; 
}