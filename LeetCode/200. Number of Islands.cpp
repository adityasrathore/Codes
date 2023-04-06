class Solution {
public:
    void bfs(int i,int j,vector<vector<int>> &vis,vector<vector<char>> &grid){
        int m=grid.size();
        int n=grid[0].size();
        vis[i][j]=1;
        queue <pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            int a[4]={1,-1,0,0};
            int b[4]={0,0,1,-1};
            for(int k=0;k<4;k++){
                int nrow=row+a[k];
                int ncol=col+b[k];
                 if(nrow>=0 && nrow<m && ncol>=0 && ncol<n
                    && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                     vis[nrow][ncol]=1;
                     q.push({nrow,ncol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;
    }
};
