#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int arr1[n1], arr2[n2], arr3[n3];
    for(int i = 0; i < n1; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i < n2; i++){
        cin>>arr2[i];
    }
    for(int i = 0; i < n3; i++){
        cin>>arr3[i];
    }
    unordered_map <int, int> hash;
    for(int i = 0; i < n1; i++){
        if(hash.find(arr1[i]) != hash.end()){
            continue;
        }
        else{
            hash[arr1[i]]++;
        }
    }
    for(int i = 0; i < n2; i++){
        if(hash.find(arr2[i]) != hash.end()){
            continue;
        }
        else{
            hash[arr2[i]]++;
        }
    }
    for(int i = 0; i < n3; i++){
        if(hash.find(arr3[i]) != hash.end()){
            cout<<arr3[i]<<" ";
        }
    }
    return 0;
}