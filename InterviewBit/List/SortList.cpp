#include<bits/stdc++.h>
using namespace std;
int main(){
    list <int> A;
    int n, val;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>val;
        A.push_back(val);
    }
    A.sort();
    for(auto it = A.begin(); it != A.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}