#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;//n=no of nodes , m=no of edges
    vector<int>adj[n+1];
    for(int i=0;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}
//Time Complexity;-O(n), Space =O(2*m)//