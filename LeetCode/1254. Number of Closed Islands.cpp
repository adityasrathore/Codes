class Solution {
public:
    bool isValid(int i,int j,int m,int n,vector<vector<int>>& grid){
        if((i>=0 && i<m) && (j>=0 && j<n) && grid[i][j]==0)
            return true;
        return false;
    }
    void dfs(int i,int j,int m,int n,vector<vector<int>>& grid){
        grid[i][j]=1;
        int x[4]={1,-1,0,0};
        int y[4]={0,0,1,-1};
        for(int k=0;k<4;k++){
            int xx=i+x[k];
            int yy=j+y[k];
            if(isValid(xx,yy,m,n,grid))
                dfs(xx,yy,m,n,grid);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i*j==0 || i==m-1 || j==n-1)
                    if(grid[i][j]==0)
                        dfs(i,j,m,n,grid);
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    count++;
                    dfs(i,j,m,n,grid);
                }
            }
        }
        return count;
    }
};
