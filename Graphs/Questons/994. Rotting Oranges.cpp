class Solution {
public:
	int orangesRotting(vector<vector<int>>& grid) {
		int n= grid.size();
		int m=grid[0].size();
		int fresh=0;
		vector<vector<int>>vis(n,vector<int>(m,0));
		queue<pair<pair<int,int>,int>>q;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(grid[i][j]==2){
					vis[i][j]=1;
					q.push({{i,j},0});
				}
				else if(grid[i][j]==1){
					fresh++;
				}
			}
		}
		int delr[]={-1,0,1,0};
		int delc[]={0,1,0,-1};
		int tym=0;
		while(!q.empty()){
			int r =q.front().first.first;
			int c =q.front().first.second;
			int t=q.front().second;
			tym=max(tym,t);
			q.pop();
			for(int i=0;i<4;i++){
				int nr=r+delr[i];
				int nc=c+delc[i];
				if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1){
					if(!vis[nr][nc]){
						vis[nr][nc]=1;
						q.push({{nr,nc},t+1});
						fresh--;
					}
				}
			}
		}
		if(fresh)return -1;
		return tym;
	}
};