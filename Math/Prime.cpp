#include <algorithm>
#include<bits/stdc++.h>
#include<cstring>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;
void sieve(int n, bool prime[]){
    for(int i = 2; i * i <= n; i++){
        if(prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
}
void local(int n){
    for(int i = 2; i < n; i++){
        int flag = 1;
        for(int j = 2; j < sqrt(i); j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    bool prime[n];
    memset(prime, true, sizeof(prime));
    auto start = high_resolution_clock::now();
    local(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<duration.count()<<"\n";
    auto start1 = high_resolution_clock::now();
    sieve(n, prime);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    cout<<duration1.count();
    return 0;
}