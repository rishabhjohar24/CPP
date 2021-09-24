#include<bits/stdc++.h>
using namespace std;
int mindelete(int arr[], int n){
    unordered_map <int, int> freq;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    int max_freq = INT_MIN;
    for(auto itr = freq.begin(); itr != freq.end(); itr++){
        max_freq = max(max_freq, itr->second);
    }
    return n - max_freq;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<mindelete(arr, n);
    return 0;
}