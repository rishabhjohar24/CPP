#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp,n,diff=0;
    cin>>n;
    vector <int> A;
    for(int i=0; i<n; i++){
        cin>>temp;
        A.push_back(temp);
    }
    if(A.size() < 2){
        return 0;
    } else {
        sort(A.begin() , A.end());
        for(int i=0; i<n-1; i++){
            temp = A[i+1] - A[i];
            if(temp >= diff){
                diff = temp;
                temp = 0;
            }
        }
    }
    cout<<diff;
    return 0;
}