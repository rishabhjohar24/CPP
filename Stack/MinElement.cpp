#include<bits/stdc++.h>
using namespace std;
void push(int a){
    s.push(a);
    if(ss.size() == 0 || ss.top() >= a){
        ss.push(a);
        return; 
    }
}
int pop(){
    if(s.size() == 0){
        return -1;
    }
    int ans = s.top();
    s.pop();
    if(ss.top() == ans){
        ss.pop();
    }
    return ans;
}
int getmin(){
    if(ss.size() == 0){
        return -1;
    } else {
        return ss.top();
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    stcak <int> s, ss;
    for(int i = 0; i < n; i++){

    }
}