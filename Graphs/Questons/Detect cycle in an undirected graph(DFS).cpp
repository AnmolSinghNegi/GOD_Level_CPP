class Solution {
  public:
    bool detectCycle(int node,int src ,vector<int>adj[],int vis[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(detectCycle(it,node,adj,vis))return true;
            }
            else if(it!=src){
                return true;
            }
        }
         return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detectCycle(i,-1,adj,vis))return true;
            }
        }
     return false;
    }
};