#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        long long count, a, y, x;
        vector<pair<long, long>> v;
        cin>>a>>y>>x;
        long long candel = 1;
        if(a == y){
            count = x * a;
        }
        else if(a < y){
            count = count = x * a + 1;
        }
        else{
            count = y * x;
        }
        cout<<count<<endl;
    }
    return 0;
}