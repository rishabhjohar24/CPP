#include<bits/stdc++.h>
using namespace std;
list <int> adj[10001];
vector<int> prime;
bool visit[10001] = {false}, Check[10001] = {false};
int level[10001] = {0};
//Utility Function
void SieveOfEratosthenes();
bool isValid(int a, int b);
bool isPrime(int x);
void addedge(int v, int u);
void buildGraph();
void BFS(int a);
void Solution(int n, int m){
    SieveOfEratosthenes();
    buildGraph();
    BFS(n);
    if(level[m]){
        cout<<level[m];
    }
    else{
        cout<<"IMPOSSIBLE";
    }
}
//Driver Code
int main(){
    int n, m;
    cin>>n>>m;
    Solution(n, m);
    return 0;
}
void BFS(int a){
    visit[a] = true;
    level[a] = 0;
    list <int> q;
    q.push_back(a);
    while(!q.empty()){
        int k = q.front();
        q.pop_front();
        for(auto x : adj[k]){
            if(!visit[x]){
                visit[x] = true;
                level[x] = 1 + level[k];
                q.push_back(x);
            }
        }
    }
}
void buildGraph(){
    for(int i = 1000; i < 10000; i++){
        if(isPrime(i)){
            prime.push_back(i);
        }
    }
    for(int i = 0; i < prime.size(); i++){
        for(int j = i + 1; j < prime.size(); j++){
            int a = prime[i];
            int b = prime[j];
            if(isValid(a, b)){
                addedge(a, b);
            }
        }
    }
}
void SieveOfEratosthenes(){
    memset(Check, true, sizeof(Check)); 
    for (int p = 2; p * p <= 10000; p++){
        if (Check[p] == true){
            for (int i = p * p; i <= 10000; i += p){
                Check[i] = false;
            }
        }
    }
}
void addedge(int v, int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
bool isValid(int a, int b){
    int count = 0;
    while(a > 0 && b > 0){
        if(a % 10 != b % 10){
            count++;
        }
        a /= 10;
        b /= 10;
    }
    if(count == 1){
        return true;
    }
    return false;
}
bool isPrime(int x){
    if(Check[x]){
        return true;
    }
    return false;
}