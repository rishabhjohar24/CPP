#include<bits/stdc++.h>
using namespace std;
void addEdge(list <int> adj[], int v, int u){
    adj[v].push_back(u);
}
void print(list <int> adj[], int n){
    for(int i = 0; i < n; i++){
        cout<<i<<"-> ";
        for(auto x : adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void BFS(list <int> adj[], int n, int s){
    bool* visit = new bool[n];
    visit[s] = true;
    list <int> q;
    q.push_back(s);
    list <int> :: iterator i;
    while(!q.empty()){
        s = q.front();
        cout<<s<<" ";
        q.pop_front();
        for(i = adj[s].begin(); i != adj[s].end(); i++){
            if(!visit[*i]){
                visit[*i] = true;
                q.push_back(*i);
            }
        }  
    }
}
int main(){
    int v = 5;
    list <int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);
    print(adj, 4);
    BFS(adj, 4, 2);
}
// class Graph{
//     int V;
//     list <int>* ris;
//     public :
//         Graph(int k);
//         void addEdge(int v, int u);
//         void print(int V);
//         void BFS(int s);
// };
// Graph :: Graph(int k){
//     this->V = k;
//     ris = new list<int>[V];
// }
// void Graph :: addEdge(int v, int u){
//     ris[v].push_back(u);
// }
// void Graph :: print(int V){
//     for(int i = 0; i < V; i++){
//         for(auto x : ris[i]){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }
// }
// void Graph :: BFS(int s){
//     list <int> queue;
//     queue.push_back(s);
//     bool* visit = new bool[V];
//     visit[s] = true;
//     list <int> :: iterator i;
//     while(!queue.empty()){
//         s = queue.front();
//         cout<<s;
//         queue.pop_front();
//         for(i = ris[s].begin(); i != ris[s].end(); i++){
//             if(!visit[*i]){
//                 visit[*i] = true;
//                 queue.push_back(*i);
//             }
//         }
//     }
// }
// int main(){
//     Graph g(4);
//     g.addEdge(0, 1);
//     g.addEdge(0, 2);
//     g.addEdge(1, 2);
//     g.addEdge(2, 0);
//     g.addEdge(2, 3);
//     g.addEdge(3, 3);
//     g.print(4);
//     g.BFS(2);
//     return 0;
// }