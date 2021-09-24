#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solution(){
    int n, aaaa = 0;
    unordered_map<int, int> a;
    cin>>n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin>>array[i];
        a[array[i]]++;
    }
    for(auto i : a){
        (i.second > i.first - 1) ? aaaa += i.first - 1 : aaaa += i.second;
    }
    cout<<aaaa<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        solution();
    }
    return 0;
}