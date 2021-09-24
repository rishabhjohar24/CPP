#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    unordered_map<int , pair<int , int>> hash;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int sum = arr[i] + arr[j];
            if(hash.find(sum) == hash.end()){
                hash[sum] = make_pair(i, j);
            }
            else{
                pair<int, int> p = hash[sum];
                cout<<arr[p.first]<<" "<<arr[p.second]<<" AND "<<arr[i]<<" "<<arr[j];
                return true;
            }
        }
    }
    cout<<"No pairs found";
    return false ;
}