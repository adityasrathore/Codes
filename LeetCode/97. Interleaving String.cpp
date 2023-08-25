class Solution {
public:
    bool solve(string s1, string s2, string s3,int i,int j,int k,vector<vector<int>> &dp){
        if(i == s1.size() && j == s2.size() && k == s3.size())
            return true;
        if(dp[i][j] != -1)
            return dp[i][j];
        
        bool x = false,y = false;
        
        if(i != s1.size()){
            if(s1[i] == s3[k]){
                x = solve(s1,s2,s3,i+1,j,k+1,dp);
            }
        }
        if(j != s2.size()){
            if(s2[j] == s3[k]){
                y = solve(s1,s2,s3,i,j+1,k+1,dp);
            }
        }
        return dp[i][j] = x || y;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.size();
        int n = s2.size();
        int o = s3.size();
        if(m + n != o)
            return false;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(s1,s2,s3,0,0,0,dp);
    }
};
