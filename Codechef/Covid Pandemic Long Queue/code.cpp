#include<iostream>
#include<vector>
using namespace std;
int main(){
    int temp,t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int a[n];
        vector <int> v;
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        for(int j=0; j<n; j++){
            if(a[j] == 1){
                v.push_back(j);
            }
        }
        if(v.size() == 1){
            cout<<"YES";
        } else {
            for(int i=0; i<v.size(); i++){
            temp  = v.at(i+1)-v.at(i);
            if(temp<6){
                cout<<"NO";
            }  
            break;
            }
            if(temp >= 6){
                cout<<"YES";
            }
        }
    }
    return 0;
}