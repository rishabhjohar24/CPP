#include<stack>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
void interleave(queue<int>& q, int n){
    stack <int> s;
    for(int i = 0; i < n / 2; i++){
        s.push(q.front());
        q.pop();
    }
    for(int i = 0; i < n / 2; i++){
        q.push(s.top());
        s.pop();
    }
    for(int i = 0; i < n / 2; i++){
        q.push(q.front());
        q.pop();
    }
    for(int i = 0; i < n / 2; i++){
        s.push(q.front());
        q.pop();
    }
    for(int i = 0; i < n / 2; i++){
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
    for(int i = 0; i < n; i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    int n, var;
    cin>>n;
    queue <int> q;
    for(int i = 0; i < n; i++){
        cin>>var;
        q.push(var);
    }
    interleave(q, n);
    return 0;
}