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
