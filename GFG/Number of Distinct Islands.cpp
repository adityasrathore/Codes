class Solution {
  public:
    void dfs(int i,int j,int r,int c,vector<vector<int>> &vis,vector<vector<int>> &grid, 
                                                                vector<pair<int,int>> &v){
        int n = grid.size();
        int m = grid[0].size();
        vis[i][j] = 1;
        v.push_back({i-r,j-c});
        int a[4] = {1,0,-1,0};
        int b[4] = {0,1,0,-1};
        for(int k=0;k<4;k++){
            int nrow = i + a[k];
            int ncol = j + b[k];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol]
                && grid[nrow][ncol] == 1){
                    dfs(nrow,ncol,r,c,vis,grid,v);
                }
        }
        
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector <vector<int>> vis(n,vector<int>(m,0));
        set <vector<pair<int,int>>> s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] == 0 && grid[i][j] == 1){
                    vector<pair<int,int>> v;
                    dfs(i,j,i,j,vis,grid,v);
                    s.insert(v);
                }
            }
        }
        return s.size();
    }
};
