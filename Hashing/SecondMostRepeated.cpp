#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    unordered_map<string, int> map;
    for(int i = 0; i < n; i++){
        map[s[i]]++;
    }
    int max1 = INT_MIN, max2 = INT_MIN;
    for(auto it = map.begin(); it != map.end(); it++){
        if(it->second > max1){
            max2 = max1;
            max1 = it->second;
        }
        else if (it->second > max2 && max2 != max1)
        {
            max2 = it->second;
        }
    }
    for(auto it = map.begin(); it != map.end(); it++){
        if(it->second == max2){
            cout<<it->first;
            break;
        }
    }
    return 0;
}