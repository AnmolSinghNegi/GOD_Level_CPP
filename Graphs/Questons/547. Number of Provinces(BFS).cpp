class Solution {
public:
    void bfs(int start,vector<vector<int>>& isConnected, vector<int>
    &vis){
        vis[start]=1;
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int node =q.front();
            q.pop();
            for(int i=0;i<isConnected[node].size();i++){
                if(!vis[i]&&isConnected[node][i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V =isConnected.size();
        int provinces=0;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bfs(i,isConnected,vis);
                provinces++;
            }
        }
        return provinces;
    }
};