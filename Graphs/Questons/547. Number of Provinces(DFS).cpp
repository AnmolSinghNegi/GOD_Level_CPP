class Solution {
public:
    void dfs(int start,vector<vector<int>>& isConnected, vector<int>
    &vis){
        vis[start]=1;
        for(int i=0;i<isConnected[start].size();i++){
            if(!vis[i]&&isConnected[start][i]){
                dfs(i,isConnected,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V =isConnected.size();
        int provinces=0;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,isConnected,vis);
                provinces++;
            }
        }
        return provinces;
    }
};