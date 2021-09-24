#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, temp;
    cin>>n>>k;
    vector <int> A(n);
    for(int i = 0; i < n; i++){
        cin>>temp;
        A.push_back(temp);
    }
    int l = 0, count = 0, maxlen = 0;
    for(int i = 0; i < A.size(); i++){
        if(A[i] == 0){
            count++;
        }
        while(count > k){
            if(A[l] == 0){
                count--;
            }
            l++;
        }
        maxlen = max(maxlen, i - l + 1);
    }
    cout<<maxlen;
    return 0;
}