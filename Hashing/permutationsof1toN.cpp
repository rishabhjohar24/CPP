#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count = 0;
    unordered_map<int, int> hash;
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(hash.find(i + 1) == hash.end()){
            count++;
        }
    }
    cout<<count;
    return 0;
}