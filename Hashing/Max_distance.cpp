#include<bits/stdc++.h>
using namespace std;
int maxDistCalc(int arr[], int n){
    unordered_map <int, int >dist;
    int max_dist = INT_MIN;
    for(int i = 0; i < n; i++){
        if(dist.find(arr[i]) == dist.end()){
            dist[arr[i]] = i;
        }
        else{
            max_dist = max(max_dist, i - dist[arr[i]]);
        }
    }
    return max_dist;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<maxDistCalc(arr, n);
    return 0;
}