#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    vector <int> a;
    while(i!=0){
        a.push_back(i);
        i--;
    }
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}