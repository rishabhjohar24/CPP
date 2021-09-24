#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum, count = 0, p;
    cin>>n>>sum;
    int arr1[n], arr2[n], arr3[n], arr4[n];
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin>>arr2[i];
    }
    for(int i = 0; i < n; i++){
        cin>>arr3[i];
    }
    for(int i = 0; i < n; i++){
        cin>>arr4[i];
    }
    unordered_map<int, int> hash;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            hash[arr1[i] + arr2[j]]++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(hash.find(sum - (arr3[i] + arr4[j])) != hash.end()){
                count += hash[sum - (arr3[i] + arr4[j])];
            }
        }
    }
    cout<<count;
    return 0;
}
