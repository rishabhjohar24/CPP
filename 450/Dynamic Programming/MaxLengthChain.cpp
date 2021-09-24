#include<bits/stdc++.h>
using namespace std;
void lengthOfMaxChain(vector<pair<int, int>> & a, int n){
    vector<int>lis(n, 1);
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i].first > a[j].second && lis[i] < lis[j] + 1){
                lis[i] = lis[j] + 1;
            }
        }
    }
    cout<<*max_element(lis.begin(), lis.end());
}
int main(){
    vector<pair<int, int>> a;
    int n, var1, var2;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>var1>>var2;
        a.push_back(make_pair(var1, var2));
    }
    lengthOfMaxChain(a, n);
    return 0;
}