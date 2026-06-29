class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();

        queue<pair<int,int>> q;

        for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        if(isWater[i][j] == 1) {
            isWater[i][j] = 0;
            q.push({i, j});
        } else {
            isWater[i][j] = -1;
        }
    }
}
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};

        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();

            for(int k=0;k<4;k++){
            int u=x+dx[k];
            int v=y+dy[k];

            if(u >= 0 && v >= 0 && u < m && v < n&& isWater[u][v]==-1){
                isWater[u][v]=isWater[x][y]+1;
                q.push({u,v});
            }
        }
       }
        
        return isWater;
    }
};



