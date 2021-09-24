#include<iostream>
using namespace std;
int main(){
    int n, temp = 0 , max = 0;
    cin>>n;
    for(int i = 1; i < 11; i++){
        temp = n % i;
        if(temp == 0){
            max = i;
        }
    }
    cout<<max;
    return 0;
}