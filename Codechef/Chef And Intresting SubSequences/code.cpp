#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;
        vector <int> v;
        for(int j=0; j<n;j++){   
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
         sort(v.begin(), v.end()); 
        for(auto x: v){
        cout<<x<<" ";
        }
    }
    return 0;
}
//Not completed yet