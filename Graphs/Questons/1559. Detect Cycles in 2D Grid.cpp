class Solution {
public:
    bool dfs(int row,int col,vector<vector<char>>& grid,vector<vector<int>>&vis,int sr,int sc){
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr =row+delr[i];
            int nc=col+delc[i];
            if(nr<0||nr>=n||nc<0||nc>=m||grid[nr][nc]!=grid[row][col])continue;
            if(!vis[nr][nc]){
                if(dfs(nr,nc,grid,vis,row,col))return true;
            }
            else if(nr!=sr||nc!=sc){
                return true;
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]){
                    if(dfs(i,j,grid,vis,i,j))return true;
                }
            }
        }
        return false;
    }
};