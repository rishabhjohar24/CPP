#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum, count = 0, var;
    cin>>n>>sum;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    unordered_map<int, int> map;
    for(int i = 0; i < n; i++){
        map[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        var = sum - arr[i];
        if(map.find(var) != map.end()){
            count  = count + map[var];
        }
        if(var == arr[i]){
            count--;
        }
    }
    cout<<count / 2;;
    return 0;
}