class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        while(!q.empty()){
            int r =q.front().first.first;
            int c =q.front().first.second;
            int steps =q.front().second;
            dis[r][c]=steps;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+delr[i];
                int nc=c+delc[i];
                 if(nr<0||nr>=n||nc<0||nc>=m||mat[nr][nc]==0)continue;
                 if(!vis[nr][nc]){
                     vis[nr][nc]=1;
                     q.push({{nr,nc},steps+1});
                 }
            }
        }
        return dis;
    }
};