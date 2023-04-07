class Solution {
public:
    bool isValid(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        if(i>=0 && i<m && j>=0 && j<n && grid[i][j]==1 && vis[i][j]==0)
            return true;
        return false;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue <pair<int,int>> q;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==m-1 || j==0 || j==n-1){
                    if(grid[i][j]==1){
                        q.push({i,j});
                        vis[i][j]=1;
                    }
                }
            }
        }        
        
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            int a[4]={1,-1,0,0};
            int b[4]={0,0,1,-1};
            for(int k=0;k<4;k++){
                int xx=x+a[k];
                int yy=y+b[k];
                if(isValid(xx,yy,vis,grid)){
                    vis[xx][yy]=1;
                    q.push({xx,yy});
                }
            }
        }
        int count=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1 && vis[i][j]==0)
                    count++;
        return count;
    }
};
