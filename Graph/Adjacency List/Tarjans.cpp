#include<bits/stdc++.h>
using namespace std;
list <int> adj[100001];
bool visit[100001] = {false}, onStack[100001] = {false};
int in[100001] = {0}, low[100001] = {0}, timer = 1, SCC = 0;
stack <int> st;
void Tarjan(int node){
    visit[node] = true;
    in[node] = timer;
    low[node] = timer;
    onStack[node] = true;
    st.push(node);
    timer++;
    for(auto child : adj[node]){
        if(visit[child] && onStack[child]){
            low[node] = min(low[node], in[child]);
        }
        else{
            if(!visit[child]){
                Tarjan(child);
                if(onStack[child]){
                    low[node] = min(low[node], low[child]);
                }
            }
        }
    }
    if(in[node] == low[node]){
		SCC++;
		cout<<"SCC #"<<SCC<<endl;
		int u;
		while(1){
            u = st.top();
			st.pop() , onStack[u] = false;
			cout<<u<<" ";
			if(u == node){
                break;
            }
		}
		cout<<endl;
	}
}
int main(){
    int n, m, a, b;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(int i = 1; i <= n; i++){
        if(!visit[i]){
            Tarjan(i);
        }
    }
    return 0;
}