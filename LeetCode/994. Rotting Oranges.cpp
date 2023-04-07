class Solution {
public:
    bool isValid(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        if(i>=0&&i<m && j>=0&&j<n && grid[i][j]==1 && vis[i][j]!=2)
            return true;
        return false;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector <vector<int>> vis(m,vector<int>(n,0));
        queue <pair <pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }
            }
        }
        int time=0;
        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int t=q.front().second;
            time=max(t,time);
            q.pop();
            int a[4]={1,-1,0,0};
            int b[4]={0,0,1,-1};
            for(int k=0;k<4;k++){
                int xx=x+a[k];
                int yy=y+b[k];
                if(isValid(xx,yy,vis,grid)==true){
                    q.push({{xx,yy},t+1});
                    vis[xx][yy]=2;
                }
            }
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1 && vis[i][j]!=2)
                    return -1;
        return time;
    }
};
