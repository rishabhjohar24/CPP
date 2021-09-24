#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> ABC;
    for (int k = 1; k <= 1000000; k++) { 
        if (sqrt(k) == (int)sqrt(k)){ 
            ABC.push_back(K);           
        } 
    } 
    for(int i = 0; i < t; i++){
        for(int i=0;i<ABC.size();i++){
            cout<<ABC[i]<<endl;
            int in;
            cin>>in;
            if(in == 1){
                break;
            }
            else if(in == 0){
                continue;
            }
            else if(in == -1){
                break;
            }
        }
    }
    return 0;
}