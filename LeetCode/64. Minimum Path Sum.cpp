class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid){
        if(i==0 && j==0)
            return grid[i][j];
        if(i<0 || j<0)
            return 1e9;
        int left=grid[i][j]+solve(i,j-1,grid);
        int up=grid[i][j]+solve(i-1,j,grid);
        return min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        return solve(m-1,n-1,grid);
    }
};



class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid,vector <vector<int>> &v){
        if(i==0 && j==0)
            return grid[i][j];
        if(i<0 || j<0)
            return 1e9;
        if(v[i][j]!=-1)
            return v[i][j];
        int left=grid[i][j]+solve(i,j-1,grid,v);
        int up=grid[i][j]+solve(i-1,j,grid,v);
        return v[i][j]=min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector <vector<int>> v(m+1,vector <int> (n+1,-1));
        return solve(m-1,n-1,grid,v);
    }
};




class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector <vector<int>> dp(m+1,vector <int> (n+1,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    dp[i][j]=grid[i][j];
                
                else{
                    int left=1e9,up=1e9;
                    if(i>=1)
                        left=grid[i][j]+dp[i-1][j];
                    if(j>=1)
                        up=grid[i][j]+dp[i][j-1];
                    dp[i][j]=min(left,up);
                }
            }
        }
        return dp[m-1][n-1];
    }
};
