#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        vector <int> a(n);
        for(int j=0; j<n; j++){
            int temp=0;
            cin>>temp;
            a.push_back(temp);
        }
        cout<<*max_element(a.begin(),a.end());
    }
    return 0;
}