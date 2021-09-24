#include<bits/stdc++.h>
using namespace std;
bool sorty(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    unordered_map <int, int> hash;
    vector <int> res;
    vector <pair<int, int>> v;
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }
    copy(hash.begin(), hash.end(), back_inserter(v));
    sort(v.begin(), v.end(), sorty);
    for(int i = 0; i < v.size(); i++){
        while(v[i].second--){
            cout<<v[i].first<<" ";
        }
    }
    return 0;
}