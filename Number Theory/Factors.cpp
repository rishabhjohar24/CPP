#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long long n, prev_n, flag = 0, temp;
    cin>>n;
    temp = n;
    for(long long i = 2; i <= n / 2; i++){
        if(temp % i == 0){
            while(temp % i == 0){
                prev_n = temp;
                temp /= i;
                cout<<i<<" ";
                flag = 1;
            }
        }
    }
    if(flag == 0){
        cout<<n;
    }
    return 0;
}