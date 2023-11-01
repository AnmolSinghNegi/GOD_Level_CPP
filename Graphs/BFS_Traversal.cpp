#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(int v, vector<int> adj[]) {
    vector<int> vis(v+1, 0); // Initialize vis with 0
    vis[1] = 1; // Assuming starting node = 1
    vector<int> bfs;
    queue<int> q;
    q.push(1);
    
    while(!q.empty()) {
        int node = q.front();
        bfs.push_back(node);
        q.pop();
        
        for(auto it : adj[node]) {
            if(!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    } 
    return bfs;
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
    
    vector<int> bf = bfs(n, adj);
    
    for(auto it : bf) {
        cout << it << " ";
    }
    
    return 0;
}