#include<bits/stdc++.h>
using namespace std;
bool check(int n, queue<int>& q){
    int exp = 1;
    stack <int> s;
    for(int i = 0; i < n; i++){
        if(q.front() == exp){
            exp++;
        }
        else{
            if(!s.empty() && s.top() < q.front()){
                return false;
            } 
            s.push(q.front());
        }
        q.pop();
    }
    while(!s.empty() && s.top() == exp){
        s.pop();
        exp++;
    }
    if(exp - 1 == n && s.empty()){
        return true;
    }
    return false;
}
int main(){
    queue <int> q;
    int n, val; 
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>val;
        q.push(val);
    }
    check(n , q) ? (cout<<" YES") : (cout<<"NO");
}