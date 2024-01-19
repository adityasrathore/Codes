// class Solution {
// public:
//     // Easy Pezy Pussy squeezeyy
//     int solve(int i,int j,int m,int n,vector<vector<int>>& matrix,
//              vector<vector<int>> &dp){
//         if(i<0 || j<0 || i>m || j>n) 
//             return INT_MAX;
//         if(i == m) 
//             return matrix[i][j];
        
//         if(dp[i][j] != -1) return dp[i][j];
       
//         return dp[i][j] = matrix[i][j] + min(solve(i+1,j-1,m,n,matrix,dp),
//            min(solve(i+1,j,m,n,matrix,dp), solve(i+1,j+1,m,n,matrix,dp)));
//     }
    
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int ans=INT_MAX;
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         for(int j=0;j<n;j++)
//            ans = min(ans,solve(0,j,m-1,n-1,matrix,dp));    
//         return ans;
//     }
// };
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int m = A.size();
        int n = A[0].size();

        if (m == 1 || n == 1) 
            return A[0][0];

        vector<vector<int>> dp(m,vector<int>(n, INT_MAX));
        int ans = INT_MAX;

        for (int i = 0; i < A.size(); ++i) {
            ans = min(ans, minFallingPathSum(A, 0, i, dp));
        }

        return ans;
    }

    int minFallingPathSum(vector<vector<int>>& A, int row, int col,  vector<vector<int>>& dp) {
        int m = A.size();
        int n = A[0].size();

        if (dp[row][col] != INT_MAX) return dp[row][col];

        if (row == m - 1)
            return dp[row][col] = A[row][col];

        int left = INT_MAX, right = INT_MAX;

        if (col > 0)
            left = minFallingPathSum(A, row + 1, col - 1, dp);

        int straight = minFallingPathSum(A, row + 1, col, dp);

        if (col < n - 1)
            right = minFallingPathSum(A, row + 1, col + 1, dp);

        dp[row][col] = min(left, min(straight, right)) + A[row][col];

        return dp[row][col];
    }
};

