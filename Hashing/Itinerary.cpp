#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n][2], s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin>>arr[i][j];
        }
    }
    unordered_map <string, string> hash;
    unordered_map<string, string>::iterator it; 
    for(int i = 0; i < n; i++){
        hash[arr[i][0]] = arr[i][1];
    }
    for(int i = 0; i < n; i++){
        cout<<"!";
        if(hash.find(arr[i][0]) == hash.end()){
            cout<<arr[i][0];
            s = arr[i][0];
            break;
        }
    }
    cout<<s;
    // if(s.empty()){
    //     cout<<"INVALID";
    //     return 0;
    // }
    it = hash.find(s);
    while(it != hash.end()){
        cout<<it->first<<" -> "<<it->second<<endl;
        it = hash.find(it->second);
    }
    return 0;
}