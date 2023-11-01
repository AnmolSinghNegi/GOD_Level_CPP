#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m; // n = no of nodes , m = no of edges
    cin >> n >> m; // Read n and m from input
    vector<int> adj[n+1];
    
    for(int i = 0; i < m; i++) { // Loop should run m times for m edges
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    return 0;
}

//Time Complexity;-O(n), Space =O(n*n)//