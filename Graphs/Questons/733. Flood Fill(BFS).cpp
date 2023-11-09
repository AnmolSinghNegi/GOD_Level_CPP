class Solution {
public:
  void bfs(int sr,int sc,vector<vector<int>>&vis,int color,int ini_color){
      int n=vis.size();
      int m=vis[0].size();
      vis[sr][sc]=color;
      int delr[]={-1,0,1,0};
      int delc[]={0,1,0,-1};
      queue<pair<int,int>>q;
      q.push({sr,sc});
      while(!q.empty()){
          int r=q.front().first;
          int c=q.front().second;
          q.pop();
          for(int i=0;i<4;i++){
              int nr=r+delr[i];
              int nc=c+delc[i];
              if(nr<0||nr>=n||nc<0||nc>=m||vis[nr][nc]==color)continue;
              else if(vis[nr][nc]==ini_color){
                  vis[nr][nc]=color;
                  q.push({nr,nc});
                }
          }
      }
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis;
        vis=image;
        int ini_color=image[sr][sc];
        bfs(sr,sc,vis,color,ini_color);
        return vis;
    }
};