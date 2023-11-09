class Solution {
public:
  void dfs(int sr,int sc,vector<vector<int>>&vis,int color,int ini_color){
      int n=vis.size();
      int m=vis[0].size();
      vis[sr][sc]=color;
      int delr[]={-1,0,1,0};
      int delc[]={0,1,0,-1};
     for(int i=0;i<4;i++){
         int nr=sr+delr[i];
         int nc=sc+delc[i];
         if(nr<0||nr>=n||nc<0||nc>=m||vis[nr][nc]==color)continue;
         else if(vis[nr][nc]==ini_color){
             dfs(nr,nc,vis,color,ini_color);
             }
        }
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis;
        vis=image;
        int ini_color=image[sr][sc];
        dfs(sr,sc,vis,color,ini_color);
        return vis;
    }
};