#include <iostream>
using namespace std;
int main(){
    int n,m;//n=no of nodes , m=no of edges
    cin>>n>>m;
    int adj[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    return 0;
}

//Time Complexity;-O(n), Space =O(n*n)//