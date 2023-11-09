int quickestWayUp(vector<vector<int>> ladders, vector<vector<int>> snakes) {
    map<int,int>ladd,snak;
    for(auto it:ladders)ladd[it[0]]=it[1];
    for(auto it:snakes)snak[it[0]]=it[1];
    queue<pair<int,int>>q;
    q.push({1,0});
    vector<int>vis(101,0);
    vis[1] = 1;
    int tym=0;
    while(!q.empty()){
        int val=q.front().first;
        int t=q.front().second;
        tym=max(tym,t);
        if(val==100)return tym;
        q.pop();
        for(int i=1;i<=6;i++){
            int next=val+i;
            if(next>100)continue;
            if(ladd[next])next=ladd[next];
            if(snak[next])next=snak[next];
            if(!vis[next]){
                vis[next]=1;
                q.push({next,t+1});
            }
        }
    }
    return -1;
     
}