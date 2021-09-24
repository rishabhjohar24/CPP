#include<bits/stdc++.h>
using namespace std;
bool check(int arr[], int n, int k){
    int min_dist = INT_MAX;
    unordered_map<int, int> dist;
    for(int i = 0; i < n; i++){
        if(dist.find(arr[i]) == dist.end()){
            dist[arr[i]] = i;
        }
        else{
            min_dist = min(min_dist, i - dist[arr[i]]);
        }
    }
    if(min_dist <= k){
        return true;
    }
    return false;
}
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<check(arr, n, k);
    return 0;
}