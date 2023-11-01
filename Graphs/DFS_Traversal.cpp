#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void dfs(int node,vector<int>adj[],vector<int>&vis,vector<int>&ls){
    vis[node]=1;
    ls.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
vector<int>dfs_of_graph(int v,vector<int>adj[]){
    vector<int>vis(v+1,0);
    vector<int>ls;
    int start=1;
    dfs(start,adj,vis,ls);
    return ls;
}
int main() {
    int n, m; // n = no of nodes , m = no of edges
    cin >> n >> m; // Read n and m from input
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++) { // Loop should run m times for m edges
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> df = dfs_of_graph(n, adj);
    
    for(auto it : df) {
        cout << it << " ";
    }
    
    return 0;
}