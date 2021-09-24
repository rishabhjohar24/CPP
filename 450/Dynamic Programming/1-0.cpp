#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int arr[n];
    int sum = 0, gmax = INT_MIN;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            arr[i] = -1;
        }
        else{
            arr[i] = 1;
        }
    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > gmax){
            gmax = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<gmax;
    return 0;
}