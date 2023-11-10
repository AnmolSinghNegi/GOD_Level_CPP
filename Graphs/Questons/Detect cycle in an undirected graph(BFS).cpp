class Solution {
  public:
    bool detectCycle(int i,vector<int>adj[],int vis[]){
        vis[i]=1;
        queue<pair<int,int>>q;
        q.push({i,-1});
        while(!q.empty()){
            int node=q.front().first;
            int src=q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(it!=src){
                    return true;
                }
            }
        }
         return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detectCycle(i,adj,vis))return true;
            }
        }
     return false;
    }
};