class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>&grid,vector<vector<int>>&vis){
        int n =grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=row+delr[i];
            int nc=col+delc[i];
            if(nr<0||nr>=n||nc<0||nc>=m||grid[nr][nc]=='0')continue;
            else if(!vis[nr][nc]){
                dfs(nr,nc,grid,vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n =grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int islands=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]=='1'){
                    dfs(i,j,grid,vis);
                    islands++;
                }
            }
        }
        return islands;        
    }
};