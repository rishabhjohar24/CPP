#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> arr;
    for(int i = 0; i < t; i++){
        string s, temp;
        int n, c;
        cin>>n>>c;
        // for(int i = 0; i < n; i++){
        //     cin>>temp;
        //     s = s + temp;
        // }
        cin>>s;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                arr.push_back(i);
            }
        }
        for(int i = 0; i < arr.size(); i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;   
}