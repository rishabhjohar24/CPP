#include<bits/stdc++.h>
using namespace std;
void printDuplicates(int arr[], int n){
    vector<int> v;
    int index = 0;
    unordered_map<int, int> val;
    for(int i = 0; i < n; i++){
        if(val.find(arr[i]) == val.end()){
            val[arr[i]]++;
        }
        else{
            if(find(v.begin(), v.end(), arr[i]) == v.end()){
                v.push_back(arr[i]);
            }
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    printDuplicates(arr, n);
    return 0;
}