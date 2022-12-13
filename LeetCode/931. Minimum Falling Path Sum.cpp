class Solution {
public:
    int solve(int i,int j,int m,int n,vector<vector<int>>& matrix,
             vector<vector<int>> &dp)
    {
        if(i<0 || j<0 || i>m || j>n) 
            return INT_MAX;
        if(i == m) 
            return matrix[i][j];
        
        if(dp[i][j] != -1) return dp[i][j];
       
        return dp[i][j] = matrix[i][j] + min(solve(i+1,j-1,m,n,matrix,dp),
           min(solve(i+1,j,m,n,matrix,dp), solve(i+1,j+1,m,n,matrix,dp)));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int ans=INT_MAX;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int j=0;j<n;j++)
           ans = min(ans,solve(0,j,m-1,n-1,matrix,dp));    
        return ans;
    }
};
